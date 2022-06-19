#include "Leauge.hpp"

namespace zadok {
    Leauge::Leauge(/* args */) {
    }

    Leauge::Leauge(Team teams[20]) {
         for(int i = 0; i < 20; i++) {
            this->_teams[i] = teams[i];
        }
    }
        
    Leauge::~Leauge() {
    }
}