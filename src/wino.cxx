#include "board.h"
#include "profclass.h"

//extern Profiles NewName;

void WinO(Profiles &NewName, int &wins) {
   cout << "O wins!" << endl;
   wins = 1;
   if (NewName.profileload == true) {
      NewName.losses++;
      NewName.Save();
   }
   cin.get();
   cin.ignore();
}
