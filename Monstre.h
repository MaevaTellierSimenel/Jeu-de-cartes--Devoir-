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
        void attack(int attackscore, bool exhausted, int attackUs, bool dead);
        void damagetook(int lifepoints, int attackscoreAutre, bool dead);
        void testdead(int lifepoints, bool dead);
        void printmonster(int attackscore, int lifepoints, bool exhausted, bool dead, std::string name);

        Monstre();
        Monstre(int attackscore, int lifepoints, bool exhausted, bool dead, std::string name);
};