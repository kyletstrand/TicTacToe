#include "board.h"

void WinX(int &wins) {
   cout << "X's win!" << endl;
   wins = 1;
   cin.ignore();
   cin.get();
}
