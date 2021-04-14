#include <vector>
#include <string>
#include <iostream>
#include "Monstre.h"

void Monstre::attack(int _attackscore, bool _exhausted, int attackUs){
    if ((_exhausted) == true){
        attackUs = (_attackscore);
        std::cout<<"Votre monstre inflige "<<attackUs<<" dégâts au monstre adverse."<<std::endl;
    }
    else {
        std::cout<<"Votre monstre est fatigué, il ne peux plus être utiliser."<<std::endl;
    }
}

void Monstre::damagetook(int _lifepoints, int attackEnnemy){

}

void Monstre::testdead(int _lifepoints, bool dead){

}

void Monstre::printmonster(int attackscore, int lifepoints, bool exhausted, bool dead, std::string name){

}