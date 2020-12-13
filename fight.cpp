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
    if(index < lenghtOfArray){
        arrayOfFighters[index] = fighter;
    }
}

Fighter Fight::getFighterFromArray(int index){
    if(index < lenghtOfArray){
        return arrayOfFighters[index];
    }
    return arrayOfFighters[0];
}
void Fight::attackOfFighters(Fighter fighter1, Fighter fighter2){
    bool win = false;
    for(int i = 2; win == false; i++){
        if(i % 2 == 0){
            fighter1.fightToEnemy(&fighter2);
        } else{
            fighter2.fightToEnemy(&fighter1);
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