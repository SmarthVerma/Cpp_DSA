#include <iostream>
#include <string>

using namespace std;

    class status{
        public:
        string name;
        int score;
        int health;
    };

int main(){
    status players[3];

        players[0].name="smarth";
        players[0].score=436;
        players[0].health=2;

        players[1].name="yashu";
        players[1].score=44;
        players[1].health=3;

        players[2].name="amit";
        players[2].score=363;
        players[2].health=7;    
        
        players[3].name="danny";
        players[3].score=13;
        players[3].health=10;
}