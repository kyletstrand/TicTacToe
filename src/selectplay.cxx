#include "board.h"

void SelectPlay(int &play, int &slots, bool oneplay) {
   string slo;
   if ((play % 2) == 1) cout << "X's turn!" << endl;
   else if ((play % 2) == 0 && oneplay == true) {
      cout << "O's turn!" << endl;
      OnePlay(slots);
      return;
   }
   else cout << "O's turn!" << endl;
   cout << "Make a selection: 1-9" << endl;
   cin >> slo;

   if (slo == "q" || slo == "quit") exit(0);
   slots = atoi(slo.c_str());
}
