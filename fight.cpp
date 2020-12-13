#include "Fight.h"
#include <iostream>

Fight::Fight() {}
Fight::Fight(int amount){
    lenghtOfArray = amount;
    arrayOfFighters = new Fighter[amount];
}
Fight::~Fight() {
    delete [] arrayOfFighters;
}
void Fight::addFighterToArray(Fighter fighter,unsigned int index){
    if(INDEX < lenghtOfArray){
        arrayOfFighters[INDEX] = fighter;
    }
}

Fighter Fight::getFighterFromArray(int index){
    if(INDEX < lenghtOfArray){
        return arrayOfFighters[INDEX];
    }
    return arrayoffighters[0];
}
void Fight::attackOfFighters(Fighter fighter1, Fighter fighter2){
    bool win = false;
    for(int i = 2;win == false;i++){
        if(i % 2 == 0){
            fighter1.fightToenemy(&fighter2);
        } else{
            fighter2.fightToenemy(&fighter1);
        }
        if(fighter1.getHp() <= 0){
            cout <<"Winner "<< fighter2.getName() << " Dead " <<fighter1.getName()<<endl;
            win = true;
        }
        if(fighter2.getHp() <= 0){
            cout <<"Winner "<< fighter1.getName() << " Dead " <<fighter2.getName()<<endl;
            win = true;
        }
    }
}