#include "nl.h"

void nlCatsGame(int &wins) {
   cout << "Het is een gelijkspel!" << endl;
   wins = 1;
   cin.ignore();
   cin.get();
}
