#include "board.h"

void SelectPlay(int &line, int &play, int &slots) {
   string slo;
   if ((play % 2) == 1) cout << "X's turn!" << endl;
   else if ((play % 2) == 0) cout << "O's turn!" << endl;
   cout << "Make a selection: 1-9" << endl;
   cin >> slo;

   if (slo == "q" || slo == "quit") exit(0);
   slots = atoi(slo.c_str());
   /*if (slo == "1") slots = atoi(slo.c_str());
   if (slo == "2") slots = atoi(slo.c_str());
   if (slo == "3") slots = atoi(slo.c_str());
   if (slo == "4") slots = atoi(slo.c_str());
   if (slo == "5") slots = atoi(slo.c_str());
   if (slo == "6") slots = atoi(slo.c_str());
   if (slo == "7") slots = atoi(slo.c_str());
   if (slo == "8") slots = atoi(slo.c_str());
   if (slo == "9") slots = atoi(slo.c_str());
   if (slo == "q" || slo == "quit") exit(0);*/

   //delete slo;
   if (slots < 4) line = 1;
   if (slots < 7 && slots > 3) line = 2;
   if (slots > 6) line = 3;
}
