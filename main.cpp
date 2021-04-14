#include <vector>
#include <string>
#include <iostream>
#include "Monstre.h"

using namespace std;

int main(){

    int attackUs;
    int attackEnnemy;

    Monstre monMonstre(10, 50, "Carl");
    Monstre monstreEnnemi(5, 20, "Bruh");

    Mage me ("Random", 10000);
    Mage ennemy ("Simp", 50);

    me.getNewMonster();
    ennemy.getNewMonster();
    me.attackChoice();
    ennemy.attackChoice();
    me.mageTookDamages();
    ennemy.mageTookDamages();
    me.printmage();
    ennemy.printmage();

    while(monMonstre.testdead()== false && monstreEnnemi.testdead()== false){
        monMonstre.attack(attackUs);
        monstreEnnemi.attack(attackEnnemy);
        monMonstre.damagetook(attackEnnemy);
        monstreEnnemi.damagetook(attackUs);
        monMonstre.testdead();
        monstreEnnemi.testdead();
        monMonstre.printmonster();
        monstreEnnemi.printmonster();
    }
}