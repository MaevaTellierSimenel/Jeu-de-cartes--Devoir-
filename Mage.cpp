#include <vector>
#include <string>
#include <iostream>

bool getNewMonster(){
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
    }
    

}

void attackChoice(){

}

void mageTookDamages(){

}