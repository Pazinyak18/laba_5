#include "Fighter.h"
#include <iostream>
Fighter::Fighter() {}
Fighter::Fighter(string name, double hp, double damage) : name(name), hp(hp), damage(damage) {}
Fighter::~Fighter() {}

string Fighter::getName(){
    return name;
}

void Fighter::setName(string name) {
    Fighter::name = name;
}

double Fighter::getHp(){
    return hp;
}

void Fighter::setHp(double hp) {
    Fighter::hp = hp;
}

double Fighter::getDamage(){
    return damage;
}

void Fighter::setDamage(double damage) {
    Fighter::damage = damage;
}
void Fighter::fightToenemy(Fighter* enemy){
    enemy->setHp(enemy->getHp() - damage);
}
void Fighter::print() {
    cout <<"name: " <<name << endl;
    cout <<"HP: " << hp << endl;
    cout <<"Damage: " << damage << endl;
}