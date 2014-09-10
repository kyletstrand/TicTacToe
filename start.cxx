#include "board.h"

int main(int argc, char **argv) {

   for (int i=1; i < argc; i++ ) {
      const string arg = argv[i];
      if (arg == "--help" || arg == "-h") help();
   }

   //MainMenu();                           //This is just a placeholder for the menu
   Board();                                //This is for ease of play

   return 0;
}
