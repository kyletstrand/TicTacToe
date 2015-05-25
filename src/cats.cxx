#include "board.h"
#include "profclass.h"

extern Profiles NewName;

void CatsGame(int &wins) {
   cout << "Cat's game!" << endl;
   wins = 1;
   if (NewName.profileload == true) {
      NewName.cats++;
      NewName.Save();
   }
   cin.get();
   cin.ignore();
}
