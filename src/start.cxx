#include "board.h"
#include "NL/nl.h"
#include "profclass.h"

//Profiles NewName;

int main(int argc, char **argv) {

   Profiles NewName;

   for (int i=1; i < argc; i++ ) {
      const string arg = argv[i];
      if (arg == "--help" || arg == "-h") help();
      if (arg == "-nl" || arg == "-NL") nlMainMenu(NewName);
   }

   NewName.profileload = false;
   MainMenu(NewName);                           //This is just a placeholder for the menu

   return 0;
}
