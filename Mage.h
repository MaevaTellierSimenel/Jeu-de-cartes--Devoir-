#include <vector>
#include <string>

class Mage{

    private :
        std::string _magename;
        int _magelifepoints;
        bool _magedead;
        float _mageChoice;
        std::string _magearrayofmonsters[];
    
    public :
        bool getNewMonster();
        bool attackChoice();
        void mageTookDamages();
};