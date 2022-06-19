#include "Schedule.hpp"
#include "Game.hpp"

namespace zadok {
    Schedule::Schedule(Leauge& leauge) {
        this->_leauge = leauge;
    }
    
    Schedule::~Schedule() {
    }

    int Schedule::cometation() {
        for (int i = 0; i < 20; i++) {
            Game g(this->_leauge._teams[i], this->_leauge._teams[i]);
            g.play();
        }

        return 0;
    }

    string Schedule::champion() {
        int max = 0;
        string champ = "";
        for(int i=0;i<20;i++){
            if(this->_leauge._teams[i].getScore() > max){
                max = this->_leauge._teams[i].getScore();
                champ = this->_leauge._teams[i].getName();
            }
        }
        return champ;
    }
}