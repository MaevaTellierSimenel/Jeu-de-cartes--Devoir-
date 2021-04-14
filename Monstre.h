#include <vector>
#include <string>
#include "Mage.h"

class Monstre : virtual Mage {
    private :
        int _attackscore;
        bool _exhausted = false;

    public :
        void attack(int attackUs);
        void damagetook(int attackEnnemy);
        bool testdead();
        void printmonster();

        Monstre(int attackscore, int lifepoints, std::string name);
};