#include <vector>
#include <string>
#include <iostream>

bool Mage::getNewMonster(){
    bool i = false;
    std::string answer;
    while (i == false){
        std::cout<<"Voulez-vous avoir un nouveau monstre ? Yes or No"<<std::endl;
        std::cin>>answer;
        if (answer == "Yes"){
            i == true;
            return true;
        }
        else if (answer == "No"){
            i == true;
            return false;
        }
        else {
            i = false;
        }
        return;
    }
    return;
}

bool Mage::attackChoice(){
    bool i = false;
    std::string answer;
    while (i ==false){
        std::cout<<"Que voulez-vous attaquer ? Le Mage adverse ou un de ses Monstres ?"<<std::endl;
        std::cin>>answer;
        if (answer == "Mage"){
            i = true;
            return true;    
        }
        else if (answer == "Monstre"){
            i = true;
            return false;
        }
        else{
            i = false;
        }
        return;
    }
    return;
}

void Mage::mageTookDamages(int attackEnnemy){
    if ((_magedead) == false){
        (_magelifepoints) = (_magelifepoints)-attackEnnemy;
        std::cout<<"L'adversaire  vous a infligé "<<attackEnnemy<<" de dégâts, il vous reste "<<(_magelifepoints)<<" points de vie."<<std::endl;
    }
    else{
        std::cout<<"Vous êtes déjà mort, vous ne prendrez pas de dégâts."<<std::endl;
    }
    return;
}

bool Mage::magetestdead(){
    if ((_magelifepoints) <= 0){
        (_magedead) = true;
        std::cout<<"Vous êtes mort."<<std::endl;
        return true;
    }
    return false;
}

void Mage::manaback(){
    (_manapoints) = 10;
}

void Mage::getmana(){
    return _manapoints;
}

int Mage::printmage(){
    std::cout<<"Vous êtes : "<<(_magename)<<std::endl<< "Points de vie : "<<(_magelifepoints)<<std::endl;
}

Mage::Mage(std::string magename, int magelifepoints){ _magename = a, magelifepoints = b}