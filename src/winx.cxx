#include "board.h"
#include "profclass.h"

//extern Profiles NewName;

void WinX(Profiles &NewName, int &wins) {
   cout << NewName.name << " wins!" << endl;
   wins = 1;
   if (NewName.profileload == true) {
      NewName.wins++;
      NewName.Save();
   }
   cin.get();
   cin.ignore();
}
