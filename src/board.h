#ifndef board_H
#define board_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include "profclass.h"

using namespace std;

void help();
void Initialize(string, string, string, string, string);
void Draw(string, string, string, string, string);
void SelectPlay(Profiles &, int &, int &, bool);
void WriteToBoardX(int &, string &, string &, string &, bool [], bool [], int &);
void WriteToBoardO(int &, string &, string &, string &, bool [], bool [], int &);
void WinX(Profiles &, int &);
void WinO(Profiles &, int &);
void CatsGame(Profiles &, int &);
void CheckWin(Profiles &, int &, bool [], bool []); 
void MainMenu(Profiles &);
void Board(Profiles &, bool);
void OnePlay(int &);
void Profile(Profiles &);

#endif
