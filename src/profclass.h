/**************************************/
/*            profclass.h             */
/*     Profile class declarations     */
/**************************************/                                   

#ifndef profclass_H
#define profclass_H

class Profiles {
   public:
/******  Variable Declarations ******/

      string name;
      int wins, losses, cats;
      bool profileload;

/****** Function Declarations******/

      int Access();
      void CreateNew();      
      void Save();
      void Load();
      void Menu();
      void View();     
};

#endif
