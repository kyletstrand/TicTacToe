#include "board.h"

//using namespace std;

void Initialize(string up, string upmid, string mid, string midbot, string bot) {
   system("clear");
   cout << endl << up << endl << upmid << endl << mid << endl << midbot << endl << bot << endl;
}

void Draw(string up, string upmid, string mid, string midbot, string bot) {
   system("clear");
   cout << endl << up << endl << upmid << endl << mid << endl << midbot << endl << bot << endl;
}

void SelectPlay(int &slo, int &line, int &play) {
   if ((play % 2) == 1) cout << "X's turn!" << endl;
   else if ((play % 2) == 0) cout << "O's turn!" << endl;
   cout << "Make a selection: 1-9" << endl;
   cin >> slo;
   if (slo < 4) line = 1;
   if (slo < 7 && slo > 3) line = 2;
   if (slo > 6) line = 3;
}

void WriteToBoardX(int &slo, int &line, string &up, string &mid, string &bot, bool Xmark[], bool Omark[], int &play) {
   string test;
   int check;
   if (slo == 1) {
      if (Xmark[0] == true || Omark[0] == true) {
         play++;
         return; // need to add player increment so if it errors it doesn't skip a turn
      }
      Xmark[0] = true;
      up.replace(0,1,"X");
   } 
   if (slo == 2) {
      if (Xmark[1] == true || Omark[1] == true) {
         play++;
         return;
      }
      Xmark[1] = true;
      up.replace(2,2,"X|");
   }
   if (slo == 3) {
      if (Xmark[2] == true || Omark[2] == true) {
         play++;
         return;
      }
      Xmark[2] = true; // up = " | |X";
      up.replace(4,5,"X");
   }
   if (slo == 4) {
      if (Xmark[3] == true || Omark[3] == true) {
         play++;
         return;
      }
      Xmark[3] = true;
      mid.replace(0,1,"X");
   }
   if (slo == 5) {
      if (Xmark[4] == true || Omark[4] == true) {
         play++;
         return;
      }
      Xmark[4] = true;
      mid.replace(2,2,"X|");
   }
   if (slo == 6) {
      if (Xmark[5] == true || Omark[5] == true) {
         play++;
         return;
      }
      Xmark[5] = true;
      mid.replace(4,5,"X");
   }
   if (slo == 7) {
      if (Xmark[6] == true || Omark[6] == true) {
         play++;
         return;
      } 
      Xmark[6] = true;  // bot = "X| | ";
      bot.replace(0,1,"X");
   }
   if (slo == 8) {
      if (Xmark[7] == true || Omark[7] == true) {
         play++;
         return;
      }
      Xmark[7] = true; // bot = " |X| ";
      bot.replace(2,2,"X|");
   }
   if (slo == 9) {
      if (Xmark[8] == true || Omark[8] == true) {
         play++;
         return;
      }
      Xmark[8] = true; 
      bot.replace(4,5,"X");
   }
   if (slo == 10) exit(0);
   if (slo > 10 || slo < 1) cout << "Invalid entry." << endl;
}

void WriteToBoardO(int &slo, int &line, string &up, string &mid, string &bot, bool Xmark[], bool Omark[], int &play) {
   string test;
   int check;
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
   if (slo > 10 || slo < 1) cout << "Invalid entry." << endl;
}

void WinX(int &wins) { 
   cout << "X's win!" << endl;
   wins = 1;
}

void WinO(int &wins) {
   cout << "O's win!" << endl;
   wins = 1;
}

void CatsGame(int &wins) {
   cout << "Cat's game!" << endl;
   wins = 1;
}

void CheckWin(int &wind, bool Xmar[], bool Omar[]) {
   int Xresult = 0;
   int Oresult = 0;
   if (Xmar[0] == true && Xmar[1] == true && Xmar[2] == true) WinX(wind);
   if (Xmar[3] == true && Xmar[4] == true && Xmar[5] == true) WinX(wind);
   if (Xmar[6] == true && Xmar[7] == true && Xmar[8] == true) WinX(wind);
   if (Xmar[0] == true && Xmar[3] == true && Xmar[6] == true) WinX(wind);
   if (Xmar[1] == true && Xmar[4] == true && Xmar[7] == true) WinX(wind);
   if (Xmar[2] == true && Xmar[5] == true && Xmar[8] == true) WinX(wind);
   if (Xmar[0] == true && Xmar[4] == true && Xmar[8] == true) WinX(wind);
   if (Xmar[2] == true && Xmar[4] == true && Xmar[6] == true) WinX(wind);

   if (Omar[0] == true && Omar[1] == true && Omar[2] == true) WinO(wind);
   if (Omar[3] == true && Omar[4] == true && Omar[5] == true) WinO(wind);
   if (Omar[6] == true && Omar[7] == true && Omar[8] == true) WinO(wind);
   if (Omar[0] == true && Omar[3] == true && Omar[6] == true) WinO(wind);
   if (Omar[1] == true && Omar[4] == true && Omar[7] == true) WinO(wind);
   if (Omar[2] == true && Omar[5] == true && Omar[8] == true) WinO(wind);
   if (Omar[0] == true && Omar[4] == true && Omar[8] == true) WinO(wind);
   if (Omar[2] == true && Omar[4] == true && Omar[6] == true) WinO(wind);

   for (int i = 0; i < 9; i++) {
      Xresult = Xmar[i] + Xresult;
   }
   for (int i = 0; i < 9; i++) {
      Oresult = Omar[i] + Oresult;
   }
   if ((Xresult + Oresult) == 9) CatsGame(wind);
}

int main() {
   int slot;
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
      SelectPlay(slot, linenum, player);
      if (player % 2 == 1) WriteToBoardX(slot, linenum, top, middle, bottom, X, O, player);      
      else if (player % 2 == 0) WriteToBoardO(slot, linenum, top, middle, bottom, X, O, player);
      Draw(top, topline, middle, bottomline, bottom);
      CheckWin(win, X, O);
      player++;
   }

   return 0;
}
