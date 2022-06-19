#include <iostream>
#include <string>

using namespace std;

namespace zadok {
    class Team {
        private:
            string _name;
            int _level; // between 0-1
            int _score;
            int numOfWinnings;
            int numOfLosing;

        public:
            Team();
            Team(string name, int level);
            ~Team();

            string getName();
            int getLevel();
            int getScore();

            int setScore(int s);
    };
    
}