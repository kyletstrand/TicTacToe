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
void SelectPlay(Profiles &NewName, int &, int &, bool);
void WriteToBoardX(int &, string &, string &, string &, bool [], bool [], int &);
void WriteToBoardO(int &, string &, string &, string &, bool [], bool [], int &);
void WinX(Profiles &NewName, int &);
void WinO(Profiles &NewName, int &);
void CatsGame(Profiles &NewName, int &);
void CheckWin(Profiles &NewName, int &, bool [], bool []); 
void MainMenu(Profiles &NewName);
void Board(Profiles &NewName, bool);
void OnePlay(int &);
void Profile(Profiles &NewName);

#endif
