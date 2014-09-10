#include "board.h"

void Board() {

   //string slot;       // was int slot
   int slot1;
   int win = 0;
   int player = 1; // to determine X or O
   int linenum;
   system("clear");
   string top = " | | ";
   string topline = "-|-|-";
   string middle = " | | ";
   string bottomline = "-|-|-";
   string bottom = " | | ";
   bool X[9] = {false}; // bool array for X's
   bool O[9] = {false}; // bool array for O's

   Initialize(top, topline, middle, bottomline, bottom);
   while (win != 1) {
      SelectPlay(linenum, player, slot1);               //SelectPlay(slot, linenum, player, slot1)
      if (player % 2 == 1) WriteToBoardX(slot1, linenum, top, middle, bottom, X, O, player); 
      else if (player % 2 == 0) WriteToBoardO(slot1, linenum, top, middle, bottom, X, O, player);
      Draw(top, topline, middle, bottomline, bottom);
      CheckWin(win, X, O);
      player++;
   }

}
