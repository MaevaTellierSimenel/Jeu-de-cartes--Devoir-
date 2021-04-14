#include <vector>
#include <string>
#include <iostream>
#include "Monstre.h"

using namespace std;

int main(){

    int attackUs;
    int attackEnnemy;
    int newMonsterAttack;
    int newMonsterLifepoints;
    string newMonsterName;

    Monstre monMonstre(10, 50, "Carl");
    Monstre monstreEnnemi(5, 20, "Bruh");

    Mage me ("Random", 10000);
    Mage ennemy ("Simp", 50);

    while (me.magetestdead()==false && ennemy.magetestdead()==false){
        
        if (me.attackChoice()==true){
            monMonstre.attack(attackUs);
            ennemy.mageTookDamages(attackUs);
        }
        else{
            monMonstre.attack(attackUs);
            monstreEnnemi.damagetook(attackUs);
        }

        if (ennemy.attackChoice()==true){
            monstreEnnemi.attack(attackEnnemy);
            me.mageTookDamages(attackEnnemy);
        }
        else{
            monstreEnnemi.attack(attackEnnemy);
            monMonstre.damagetook(attackEnnemy);
        }

        monMonstre.testdead();
        monstreEnnemi.testdead();

        if (monMonstre.testdead()==true && me.getNewMonster() == true && me.magetestdead()==false){
            cout<<"Rentrez les dégâts de votre nouveau monstre : ";
            cin>>newMonsterAttack;
            cout<<"Rentrez les points de vie de votre nouveau monstre : ";
            cin>>newMonsterLifepoints;
            cout<<"Rentrez le nom de votre nouveau monstre : ";
            cin>> newMonsterName;

            Monstre monMonstre(newMonsterAttack, newMonsterLifepoints, newMonsterName);
        }

        if (monstreEnnemi.testdead()==true && ennemy.getNewMonster() == true && ennemy.magetestdead()==false){
            cout<<"Rentrez les dégâts de votre nouveau monstre : ";
            cin>>newMonsterAttack;
            cout<<"Rentrez les points de vie de votre nouveau monstre : ";
            cin>>newMonsterLifepoints;
            cout<<"Rentrez le nom de votre nouveau monstre : ";
            cin>> newMonsterName;

            Monstre monstreEnnemy(newMonsterAttack, newMonsterLifepoints, newMonsterName);
        }

        me.printmage();
        ennemy.printmage();
        monMonstre.printmonster();
        monstreEnnemi.printmonster();
    }
}