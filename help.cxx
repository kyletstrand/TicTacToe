#include "board.h"

void help() {

   string p;
   cout << endl << "Help will go here." << endl << endl << "Kyle Strand - 2013" << endl;
   //cin.ignore();
   cout << endl << "Press '1' to play or 'q' to quit." << endl;
   cin >> p;

   if (p == "1") return;
   if (p == "q") exit(0);
   else
      cout << "You didn't enter anything correct. You can't play." << endl << endl;
      exit(1);

}

