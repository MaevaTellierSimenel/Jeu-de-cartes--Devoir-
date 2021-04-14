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
        
        me.manaback();
        ennemy.manaback();

        monMonstre.testdead();
        monstreEnnemi.testdead();

        if (monMonstre.testdead()==true && me.getNewMonster() == true && me.magetestdead()==false){
            cout<<"____________________ Nouveau Monstre Joueur 1 ____________________"<<endl;
            if(me.getmana()>= 8){
                cout<<"Rentrez les dégâts de votre nouveau monstre : ";
                cin>>newMonsterAttack;
                cout<<"Rentrez les points de vie de votre nouveau monstre : ";
                cin>>newMonsterLifepoints;
                cout<<"Rentrez le nom de votre nouveau monstre : ";
                cin>> newMonsterName;

                Monstre monMonstre(newMonsterAttack, newMonsterLifepoints, newMonsterName);
            }
            else{
                cout<<"Vous n'avez pas assez de mana pour invoquer un nouveau monstre."<<endl;
            }
            cout<<"__________________________________________________________________"<<endl<<endl;
        }

        if (monstreEnnemi.testdead()==true && ennemy.getNewMonster() == true && ennemy.magetestdead()==false){
            cout<<"____________________ Nouveau Monstre Joueur 2 ____________________"<<endl;
            if(ennemy.getmana()>= 8){
                cout<<"Rentrez les dégâts de votre nouveau monstre : ";
                cin>>newMonsterAttack;
                cout<<"Rentrez les points de vie de votre nouveau monstre : ";
                cin>>newMonsterLifepoints;
                cout<<"Rentrez le nom de votre nouveau monstre : ";
                cin>> newMonsterName;

                Monstre monstreEnnemi(newMonsterAttack, newMonsterLifepoints, newMonsterName);
            }
            else{
                cout<<"Vous n'avez pas assez de mana pour invoquer un nouveau monstre."<<endl;
            }
            cout<<"__________________________________________________________________"<<endl<<endl;
        }

        //tour me
        cout<<"____________________ Tour Joueur 1 ____________________"<<endl;
        me.attackChoice();
        if (me.attackChoice()==true){
            monMonstre.attack(attackUs);
            ennemy.mageTookDamages(attackUs);
        }
        else{
            monMonstre.attack(attackUs);
            monstreEnnemi.damagetook(attackUs);
        }
        cout<<"____________________ Tour Joueur 1 ____________________"<<endl;
        cout<<"_______________________________________________________"<<endl;


        //tour ennemy
        cout<<"____________________ Tour Joueur 2 ____________________"<<endl<<endl;
        ennemy.attackChoice();
        if (ennemy.attackChoice()==true){
            monstreEnnemi.attack(attackEnnemy);
            me.mageTookDamages(attackEnnemy);
        }
        else{
            monstreEnnemi.attack(attackEnnemy);
            monMonstre.damagetook(attackEnnemy);
        }
        cout<<"_______________________________________________________"<<endl<<endl;

        //Misc
        cout<<"____________________ Infos _____________________"<<endl;
        me.printmage();
        ennemy.printmage();
        monMonstre.printmonster();
        monstreEnnemi.printmonster();
        cout<<"________________________________________________"<<endl<<endl;
    }
}