#include <vector>
#include <string>

class Mage{

    private :
        std::string _name;
        int _lifepoints;
        bool _dead;
        std::string _arrayofmonsters[];
    
    public :
        void getNewMonster();
        void attackChoice();

        

};