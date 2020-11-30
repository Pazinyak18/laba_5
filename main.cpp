#include <iostream>
#include "Fight.h"

int main() {

    Fight f(4);
    f.addFighterToArray(Fighter("Frank",100,12),0);
    f.addFighterToArray(Fighter("Arnold",120,30),1);
    f.addFighterToArray(Fighter("entony",50,100),2);
    f.addFighterToArray(Fighter("Max",25,1000),3);

    //f.attackOfFighters(f.getFighterFromArray(0),f.getFighterFromArray(1));
    //f.attackOfFighters(f.getFighterFromArray(3),f.getFighterFromArray(2));



    return 0;
}