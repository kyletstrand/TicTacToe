#include "board.h"
#include "profclass.h"

extern Profiles NewName;

void WinX(int &wins) {
   cout << "X's win!" << endl;
   wins = 1;
   if (NewName.profileload == true) {
      NewName.wins++;
      NewName.Save();
   }
   cin.ignore();
}
