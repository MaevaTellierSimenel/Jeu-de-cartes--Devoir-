#include <vector>
#include <string>

class Mage{

    private :
        std::string _magename;
        int _magelifepoints;
        bool _magedead;
        bool _magedead;
        float _mageChoice;
    
    public :
        bool getNewMonster();
        bool attackChoice();
        void mageTookDamages();
        bool magetestdead();
        void printmage();

        Mage(std::string magename, int magelifepoints);
};