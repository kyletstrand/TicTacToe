#ifndef nl_H
#define nl_H

#include "../board.h"
#include "../profclass.h"

void nlMainMenu(Profiles &);
void nlOnePlay();
void nlBoard(Profiles &, bool oneplayer);
void nlProfile();
void nlhelp();
void nlSelectPlay(int &play, int &slots, bool oneplay);
void nlCheckWin(Profiles &, int &wind, bool Xmar[], bool Omar[]);
void nlCatsGame(int &wins);

#endif
