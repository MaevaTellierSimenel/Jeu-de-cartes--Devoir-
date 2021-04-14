#include <vector>
#include <string>

class Monstre {
    private :
        int _attackscore;
        int _lifepoints;
        bool _exhausted = false;
        bool _dead = false;
        std::string _name;

    public :
        void attack(int attackUs);
        void damagetook(int attackEnnemy);
        bool testdead();
        void printmonster();

        Monstre(int attackscore, int lifepoints, std::string name);
};