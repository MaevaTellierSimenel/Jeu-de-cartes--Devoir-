#include <vector>
#include <string>

class Mage{

    private :
        std::string _magename;
        int _magelifepoints;
        bool _magedead;
        float _mageChoice;
        int _manapoints = 10;
    
    public :
        bool getNewMonster();
        bool attackChoice();
        void mageTookDamages(int attack);
        bool magetestdead();
        void manaback();
        int getmana();
        void printmage();

        Mage(std::string magename, int magelifepoints);
};