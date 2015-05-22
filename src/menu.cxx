#include "board.h"

void MainMenu() {

   string x;
   int z = 0;
   bool oneplayergame = false;
   
   while (z == 0) {
      system("clear");

      cout << "=========================" << endl;
      cout << "  Welcome to TicTacToe!" << endl;
      cout << "=========================" << endl << endl << endl;
      cout << "1) New 1-player game" << endl;
      cout << "2) New 2-player game" << endl;
      cout << "3) Profile menu" << endl;
      cout << "4) About" << endl;
      cout << "5) Quit" << endl << endl;

      cout << "Enter one of the above options: "; 
      cin >> x;

      if (x =="1") {
         oneplayergame = 1;
         Board(oneplayergame);
      }
      if (x == "2") Board(oneplayergame);
      if (x == "3") Profile();
      if (x == "4") help();
      if (x == "5" || x == "q" || x == "quit") exit(0);
      oneplayergame = false;
   }
}
