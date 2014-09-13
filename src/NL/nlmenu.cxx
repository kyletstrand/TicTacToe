#include "nl.h"

void nlMainMenu() {

   string x;
   int z = 0;

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

      if (x == "1") nlOnePlay();
      if (x == "2") nlBoard();
      if (x == "3") nlProfile();
      if (x == "4") nlhelp();
      if (x == "5" || x == "q" || x == "quit") exit(0);
   }
}
