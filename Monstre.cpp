#include <vector>
#include <string>
#include <iostream>

void Monstre::attack(int attackUs){
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

void Monstre::damagetook(int attackEnnemy){
    if ((_dead) == false){
        (_lifepoints) = (_lifepoints)-attackEnnemy;
        std::cout<<"L'adversaire a infligé "<<attackEnnemy<<" de dégâts à votre monstre, il lui reste "<<(_lifepoints)<<" points de vie."<<std::endl;
    }
    else {
        std::cout<<"Votre monstre est déjà mort, il ne prendra pas de dégâts."<<std::endl;
    }
    return;
}

bool Monstre::testdead(){
    if ((_lifepoints) <= 0){
        (_dead) = true;
        std::cout<<"Votre monstre est mort."<<std::endl;
        return true;
    }
    return false;
}

void Monstre::printmonster(){
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

Monstre::Monstre(int attackscore, int lifepoints, std::string name){_attackscore = a, _lifepoints = b, _name = c}