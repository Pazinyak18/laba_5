#include "Fighter.h"
class Fight {
public:
    Fight();
    Fight(int amount);
    ~Fight();
    void addFighterToArray(Fighter fighter,unsigned int INDEX);
    Fighter getFighterFromArray(int INDEX);
    void attackOfFighters(Fighter fighter1,Fighter fighter2);



private:
    int lenghtOfArray;
    Fighter* arrayoffighters;


};