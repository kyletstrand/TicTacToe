#include "nl.h"
#include "../profclass.h"

void nlMainMenu(Profiles &NewName) {

   string x;
   int z = 0;
   bool oneplayergame = false;

   while (z == 0) {
      system("clear");
      cout << "===================================" << endl;
      cout << "  Welkom bij Boter-kass-en-eiren!" << endl;
      cout << "===================================" << endl << endl << endl;
      cout << "1) Nieuwe 1-speler spel" << endl;
      cout << "2) Nieuwe 2-speler spel" << endl;
      cout << "3) Profiel menukaart" << endl;
      cout << "4) Over" << endl;
      cout << "5) Afsluiten" << endl << endl;

      cout << "Voer een van de bovenstaande opties: ";
      cin >> x;

      if (x == "1") {
         oneplayergame = true;
         nlBoard(NewName, oneplayergame);
      }
      if (x == "2") nlBoard(NewName, oneplayergame);
      if (x == "3") nlProfile();
      if (x == "4") nlhelp();
      if (x == "5" || x == "q" || x == "quit") exit(0);
      oneplayergame = false;
   }
}
