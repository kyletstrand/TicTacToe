#include "board.h"

void CheckWin(Profiles &NewName, int &wind, bool Xmar[], bool Omar[]) {
   int Xresult = 0;
   int Oresult = 0;
   if (Xmar[0] == true && Xmar[1] == true && Xmar[2] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[3] == true && Xmar[4] == true && Xmar[5] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[6] == true && Xmar[7] == true && Xmar[8] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[0] == true && Xmar[3] == true && Xmar[6] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[1] == true && Xmar[4] == true && Xmar[7] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[2] == true && Xmar[5] == true && Xmar[8] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[0] == true && Xmar[4] == true && Xmar[8] == true) {
      WinX(NewName,wind);
      return;
   }
   if (Xmar[2] == true && Xmar[4] == true && Xmar[6] == true) {
       WinX(NewName,wind);
       return;
   }
   if (Omar[0] == true && Omar[1] == true && Omar[2] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[3] == true && Omar[4] == true && Omar[5] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[6] == true && Omar[7] == true && Omar[8] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[0] == true && Omar[3] == true && Omar[6] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[1] == true && Omar[4] == true && Omar[7] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[2] == true && Omar[5] == true && Omar[8] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[0] == true && Omar[4] == true && Omar[8] == true) {
      WinO(NewName,wind);
      return;
   }
   if (Omar[2] == true && Omar[4] == true && Omar[6] == true) {
      WinO(NewName,wind);
      return;
   }
   //if (wind == 1) return;

   for (int i = 0; i < 9; i++) {
      Xresult = Xmar[i] + Xresult;
   }
   for (int i = 0; i < 9; i++) {
      Oresult = Omar[i] + Oresult;
   }
   if ((Xresult + Oresult) == 9) CatsGame(NewName,wind);
}
