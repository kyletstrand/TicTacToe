#include "board.h"

void SelectPlay(int &slo, int &line, int &play) {
   if ((play % 2) == 1) cout << "X's turn!" << endl;
   else if ((play % 2) == 0) cout << "O's turn!" << endl;
   cout << "Make a selection: 1-9" << endl;
   cin >> slo;
   if (slo < 4) line = 1;
   if (slo < 7 && slo > 3) line = 2;
   if (slo > 6) line = 3;
}
