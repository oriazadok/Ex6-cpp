#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#include "Game.hpp"

namespace zadok {

    Game::Game(Team home, Team guest) {
        this->_home = home;
        this->_guest = guest;
    }
    
    Game::~Game() {
    }

    string Game::play() {
        srand((unsigned) time(0));

        double home = rand() % 50 + 55;
        double guest = rand() % 50 + 50;

        this->_home.setScore(home);
        this->_guest.setScore(guest);

        if(home > guest) {
            return this->_home.getName();
        }
        return this->_guest.getName();
    }
}

