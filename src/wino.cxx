#include "board.h"

void WinO(int &wins) {
   cout << "O's win!" << endl;
   wins = 1;
   cin.ignore();
   cin.get();
}
