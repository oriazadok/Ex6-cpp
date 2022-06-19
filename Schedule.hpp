#include "Leauge.hpp"


namespace zadok {
    class Schedule {
        private:
            Leauge _leauge;

           
        public:
            Schedule(Leauge& leauge);
            ~Schedule();

            int cometation();
            string champion();
    };
    
} 