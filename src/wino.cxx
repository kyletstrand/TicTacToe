#include "board.h"
#include "profclass.h"

extern Profiles NewName;

void WinO(int &wins) {
   cout << "O's win!" << endl;
   wins = 1;
   if (NewName.profileload == true) {
      NewName.losses++;
      NewName.Save();
   }
   cin.ignore();
}
