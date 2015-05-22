/*********************************/
/*        profclass.cxx          */
/*  Functions for Profiles class */
/*********************************/


#include "board.h"
#include "profclass.h"
#include <fstream>

void Profiles::CreateNew() {

   system("clear");
   cout << "Please enter your name: ";
   cin >> name;
   wins = 0;
   losses = 0;
   cats = 0;

   cout << "\nHello, " << name << "." << endl;
   cout << "Wins:   " << wins << endl;
   cout << "Losses: " << losses << endl;
   cout << "Ties:   " << cats << endl;
   profileload = true;
   cin.get();
   Save();
}

void Profiles::Save() {

   cout << "\nSaving profile...\n";
   string filename = "sav/" + name + ".sav";
   ofstream savefile;
   savefile.open(filename.c_str(), ofstream::out | ofstream::trunc);
   savefile.close();
   savefile.open(filename.c_str(), ofstream::app);
   savefile << name << "\n";
   savefile << wins << "\n";
   savefile << losses << "\n";
   savefile << cats << "\n";
   savefile.close();
   cin.get();
}

void Profiles::Load() {

   string entry;
   string temp;
   int tempint;
   string loadarr[4];
   int i = 0;
   Access();
   cout << "Please enter name on profile: ";
   cin >> entry;
   string filename = "sav/" + entry + ".sav";
   ifstream loadfile;
   loadfile.open(filename.c_str());

   if (loadfile.is_open()) {
      while (getline (loadfile, temp)) {
         loadarr[i] = temp;
         i++;
      }
      loadfile.close();
   }

   name = loadarr[0];
   wins = atoi(loadarr[1].c_str());
   losses = atoi(loadarr[2].c_str());
   cats = atoi(loadarr[3].c_str());
   profileload = true;
   cout << "File loaded." << endl;
   cin.get();
   cin.ignore();
   Menu();
}

void Profiles::View() {

   system("clear");
   cout << name << "'s Record" << endl;
   cout << "================" << endl;
   cout << "Wins:   " << wins << endl;
   cout << "Losses: " << losses << endl;
   cout << "Ties:   " << cats << endl;
   cin.get();
   cin.ignore();
   Menu();
}

void Profiles::Menu() {

   string selection;

   system("clear");
   cout << "================" << endl;
   cout << "  Profile Menu" << endl;
   cout << "================" << endl << endl << endl;
   cout << "1) Create New Profile" << endl;
   cout << "2) Load Profile" << endl;
   cout << "3) View Profile Record" << endl;
   cout << "4) Back" << endl << endl;

   cout << "Enter one of the above options: ";
   cin >> selection;

   if (selection == "1") CreateNew();
   if (selection == "2") Load();
   if (selection == "3") View();
   if (selection == "4") return;
}

int Profiles::Access() {

   DIR *dir;
   struct dirent *ent;
   if ((dir = opendir ("sav/")) != NULL) {
   /* print all the files and directories within directory */
      cout << "\nProfile saves:\n==============\n";
      while ((ent = readdir (dir)) != NULL) {
         //printf ("%s\n", ent->d_name);
         cout << ent->d_name << endl;
      }
      closedir (dir);
      cout << endl;
   } else {
  /* could not open directory */
     perror ("");
     return EXIT_FAILURE;
   }
}
