#include "nl.h"

void nlSelectPlay(int &play, int &slots, bool oneplay) {
   string slo;
   if ((play % 2) == 1) cout << "X aan de beurt!" << endl;
   else if ((play % 2) == 0 && oneplay == true) {
      cout << "O aan de beurt!" << endl;
      OnePlay(slots);
      return;
   }
   else cout << "O aan de beurt!" << endl;
   cout << "Maak een selectie: 1-9" << endl;
   cin >> slo;

   if (slo == "q" || slo == "quit") exit(0);
   slots = atoi(slo.c_str());
}
