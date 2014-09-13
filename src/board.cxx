#include "board.h"

void Board() {

   int slot1;
   int win = 0;
   int player = 1; // to determine X or O
   string top = " | | ";
   string middle = " | | ";
   string bottom = " | | ";
   const string topline = "-|-|-";
   const string bottomline = "-|-|-";
   bool X[9] = {false}; // bool array for X's
   bool O[9] = {false}; // bool array for O's

   system("clear");

   Initialize(top, topline, middle, bottomline, bottom);
   while (win != 1) {
      SelectPlay(player, slot1);               //SelectPlay(slot, linenum, player, slot1)
      if (player % 2 == 1) WriteToBoardX(slot1, top, middle, bottom, X, O, player); 
      else if (player % 2 == 0) WriteToBoardO(slot1, top, middle, bottom, X, O, player);
      Draw(top, topline, middle, bottomline, bottom);
      CheckWin(win, X, O);
      player++;
   }

}
