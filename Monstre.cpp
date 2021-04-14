#include <vector>
#include <string>
#include <iostream>
#include "Monstre.h"

void Monstre::attack(int _attackscore, bool _exhausted, int attackUs, bool _dead){
    if ((_exhausted) ==  false && (_dead) == false){
        attackUs = (_attackscore);
        std::cout<<"Votre monstre inflige "<<attackUs<<" dégâts au monstre adverse."<<std::endl;
        (_exhausted) = true;
    }
    else if ((_exhausted) == true) {
        std::cout<<"Votre monstre est fatigué, il ne peux plus être utiliser."<<std::endl;
    }
    else {
        std::cout<<"Votre monstre est mort, il ne peux plus être utiliser."<<std::endl;
    }
    return;
}

void Monstre::damagetook(int _lifepoints, int attackEnnemy, bool _dead){
    if ((_dead) == false){
        (_lifepoints) = (_lifepoints)-attackEnnemy;
        std::cout<<"L'adversaire a infligé "<<attackEnnemy<<" de dégâts à votre monstre, il lui reste "<<(_lifepoints)<<" points de vie."<<std::endl;
    }
    else {
        std::cout<<"Votre monstre est déjà mort, il ne prendra pas de dégâts."<<std::endl;
    }
    return;
}

void Monstre::testdead(int _lifepoints, bool _dead){
    if ((_lifepoints) <= 0){
        (_dead) = true;
        std::cout<<"Votre monstre est mort."<<std::endl;
    }
    return;
}

void Monstre::printmonster(int _attackscore, int _lifepoints, bool _exhausted, bool _dead, std::string _name){
    std::cout<<"Monstre sélectionné : "<<(_name)<<std::endl<< "Points de vie : "<<(_lifepoints)<<std::endl<<"Dégâts d'attaque : "<<(_attackscore)<<std::endl;
    if ((_exhausted) == true && (_dead) == false){
        std::cout<<"Statut : Fatigué"<<std::endl;
    }
    else if ((_dead) == true){
        std::cout<<"Statut : Mort"<<std::endl;
    }
    else {
        std::cout<<"Statut : En forme"<<std::endl;
    }
    return;
}