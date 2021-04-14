#include <vector>
#include <string>

class Monstre {
    private :
        int _attackscore;
        int _lifepoints;
        bool _exhausted;
        bool _dead;
        std::string _name;

    public :
        void attack(int attackscore, bool exhausted);
        void damagedtook(int lifepoints, int attackscoreAutre);
        void testdead(int lifepoints, bool dead);
        void printmonster(int attackscore, int lifepoints, bool exhausted, bool dead, std::string name);

        Monstre();
        Monstre(int attackscore, int lifepoints, bool exhausted, bool dead, std::string name);
};