#ifndef board_H
#define board_H

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

void Initialize(string top, string topline, string middle, string bottomline, string bottom);
void Draw(string top, string topline, string middle, string bottomline, string bottom);
//void SelectPlay(int slot, int linenum);
//void WriteToBoard(int slot, int linenum, string top, string middle, string bottom);

#endif
