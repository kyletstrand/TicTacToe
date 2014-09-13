#ifndef nl_H
#define nl_H

#include "../board.h"

void nlMainMenu();
void nlOnePlay();
void nlBoard();
void nlProfile();
void nlhelp();
void nlSelectPlay(int &line, int &play, int &slots);
void nlCheckWin(int &wind, bool Xmar[], bool Omar[]);
void nlCatsGame(int &wins);

#endif
