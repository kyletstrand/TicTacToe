#include "board.h"
#include "profclass.h"

//extern Profiles NewName;

void Board(Profiles &NewName, bool oneplayer) {

   int slot1;
   int win = 0;
   int player = rand()%2; // to determine X or O
   string top = " | | ";
   string middle = " | | ";
   string bottom = " | | ";
   const string topline = "-|-|-";
   const string bottomline = "-|-|-";
   bool X[9] = {false}; // bool array for X's
   bool O[9] = {false}; // bool array for O's
   srand(time(NULL));

   system("clear");

   Initialize(top, topline, middle, bottomline, bottom);
   if (NewName.profileload == false) NewName.name = 'X';
   while (win != 1) {
      SelectPlay(NewName, player, slot1, oneplayer);               //SelectPlay(slot, linenum, player, slot1)
      if (player % 2 == 1) WriteToBoardX(slot1, top, middle, bottom, X, O, player); 
      else if (player % 2 == 0) WriteToBoardO(slot1, top, middle, bottom, X, O, player);
      Draw(top, topline, middle, bottomline, bottom);
      CheckWin(NewName, win, X, O);
      player++;
   }

}
