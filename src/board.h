#ifndef board_H
#define board_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>

using namespace std;

void help();
void Initialize(string, string, string, string, string);
void Draw(string, string, string, string, string);
void SelectPlay(int &, int &, bool);
void WriteToBoardX(int &, string &, string &, string &, bool [], bool [], int &);
void WriteToBoardO(int &, string &, string &, string &, bool [], bool [], int &);
void WinX(int &);
void WinO(int &);
void CatsGame(int &);
void CheckWin(int &, bool [], bool []); 
void MainMenu();
void Board(bool);
void OnePlay(int &);
void Profile();

#endif
