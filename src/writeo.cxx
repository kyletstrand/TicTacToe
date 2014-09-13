#include "board.h"

void WriteToBoardO(int &slo,  string &up, string &mid, string &bot, bool Xmark[], bool Omark[], int &play) {
   if (slo == 1) {
      if (Xmark[0] == true || Omark[0] == true) {
         play++;
         return;
      }
      Omark[0] = true;
      up.replace(0,1,"O");
   }
   if (slo == 2) {
      if (Xmark[1] == true || Omark[1] == true) {
         play++;
         return;
      }
      Omark[1] = true;
      up.replace(2,2,"O|");
   }
   if (slo == 3) {
      if (Xmark[2] == true || Omark[2] == true) {
         play++;
         return;
      }
      Omark[2] = true; // up = " | |X";
      up.replace(4,5,"O");
   }
   if (slo == 4) {
      if (Xmark[3] == true || Omark[3] == true) {
         play++;
         return;
      }
      Omark[3] = true;
      mid.replace(0,1,"O");
   }
   if (slo == 5) {
      if (Xmark[4] == true || Omark[4] == true) {
         play++;
         return;
      }
      Omark[4] = true;
      mid.replace(2,2,"O|");
   }
   if (slo == 6) {
      if (Xmark[5] == true || Omark[5] == true) {
         play++;
         return;
      }
      Omark[5] = true;
      mid.replace(4,5,"O");
   }
   if (slo == 7) {
      if (Xmark[6] == true || Omark[6] == true) {
         play++;
         return;
      }
      Omark[6] = true;  // bot = "X| | ";
      bot.replace(0,1,"O");
   }
   if (slo == 8) {
      if (Xmark[7] == true || Omark[7] == true) {
         play++;
         return;
      }
      Omark[7] = true; // bot = " |X| ";
      bot.replace(2,2,"O|");
   }
   if (slo == 9) {
      if (Xmark[8] == true || Omark[8] == true) {
         play++;
         return;
      }
      Omark[8] = true;
      bot.replace(4,5,"O");
   }
   if (slo == 10) exit(0);
   if (slo > 10 || slo < 1) {
      cout << "Invalid entry." << endl;
      play++;
   }
}

