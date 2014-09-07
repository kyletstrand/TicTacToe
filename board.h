#ifndef board_H
#define board_H

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

void help();
void Initialize(string top, string topline, string middle, string bottomline, string bottom);
void Draw(string top, string topline, string middle, string bottomline, string bottom);
void SelectPlay(int &slo, int &line, int &play);
void WriteToBoardX(int &slo, int &line, string &up, string &mid, string &bot, bool Xmarkx[], bool Omarkx[], int &play);
void WriteToBoardO(int &slo, int &line, string &up, string &mid, string &bot, bool Xmark[], bool Omark[], int &play);
void WinX(int &wins);
void WinO(int &wins);
void CatsGame(int &wins);
void CheckWin(int &wind, bool Xmar[], bool Omar[]); 

#endif
