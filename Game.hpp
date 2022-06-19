#include <iostream>
#include <string>

#include "Team.hpp"

using namespace std;

namespace zadok {
    class Game {
        private:
            Team _home;
            Team _guest;
            int _home_score;
            int _out_score;
            int _winner;
        public:
            Game(Team home, Team _guest);
            ~Game();

            string play();
    };
    
}