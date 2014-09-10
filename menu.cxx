#include "board.h"

void MainMenu() {

   int x = 0;

   while (x == 0) {
      cout << "Main menu will go here. To get to game, enter 1 for now." << endl;
      cin >> x;
   }

   if (x == 1) {
      Board();
   }
   if (x == 2) {
      help();
   }

}
