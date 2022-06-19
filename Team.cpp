#include "Team.hpp"

namespace zadok {
    Team::Team(string name, int level) 
        : _name(name), _level(level) {
    }
    
    Team::~Team() {
    }

    string Team::getName() {
        return this->_name;
    }

    int Team::getLevel() {
        return this->_level;
    }
    int Team::getScore() {
        return this->_score;
    }

    int Team::setScore(int s) {
        this->_score += s;
        return 0;
    }
}

