#include "board.h"


void WriteToBoardX(int &slo, string &up, string &mid, string &bot, bool Xmarkx[], bool Omarkx[], int &play) {
   if (slo == 1) {
      if (Xmarkx[0] == true || Omarkx[0] == true) {
         play++;
         return; // need to add player increment so if it errors it doesn't skip a turn
      }
      Xmarkx[0] = true;
      up.replace(0,1,"X");
   }
   if (slo == 2) {
      if (Xmarkx[1] == true || Omarkx[1] == true) {
         play++;
         return;
      }
      Xmarkx[1] = true;
      up.replace(2,2,"X|");
   }
   if (slo == 3) {
      if (Xmarkx[2] == true || Omarkx[2] == true) {
         play++;
         return;
      }
      Xmarkx[2] = true; // up = " | |X";
      up.replace(4,5,"X");
   }
   if (slo == 4) {
      if (Xmarkx[3] == true || Omarkx[3] == true) {
         play++;
         return;
      }
      Xmarkx[3] = true;
      mid.replace(0,1,"X");
   }
   if (slo == 5) {
      if (Xmarkx[4] == true || Omarkx[4] == true) {
         play++;
         return;
      }
      Xmarkx[4] = true;
      mid.replace(2,2,"X|");
   }
   if (slo == 6) {
      if (Xmarkx[5] == true || Omarkx[5] == true) {
         play++;
         return;
      }
      Xmarkx[5] = true;
      mid.replace(4,5,"X");
   }
   if (slo == 7) {
      if (Xmarkx[6] == true || Omarkx[6] == true) {
         play++;
         return;
      }
      Xmarkx[6] = true;  // bot = "X| | ";
      bot.replace(0,1,"X");
   }
   if (slo == 8) {
      if (Xmarkx[7] == true || Omarkx[7] == true) {
         play++;
         return;
      }
      Xmarkx[7] = true; // bot = " |X| ";
      bot.replace(2,2,"X|");
   }
   if (slo == 9) {
      if (Xmarkx[8] == true || Omarkx[8] == true) {
         play++;
         return;
      }
      Xmarkx[8] = true;
      bot.replace(4,5,"X");
   }
   if (slo == 10) exit(0);
   if (slo > 10 || slo < 1) {
      cout << "Invalid entry." << endl;
      play++;
   }
}

