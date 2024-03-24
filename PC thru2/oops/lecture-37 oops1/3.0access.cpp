#include <iostream>
#include <string>
using namespace std;

    class player{
        public: //aceess modifier-> public, private, protected 
        int score;
        int health;
        string name;
        private:
        int kills;
    };

    int main(){
        player amit;    // amit -> object

        amit.score=46;
        amit.health=9;
        amit.name="Smarthverma";
        amit.kills=456; // !cant access

        cout<<amit.score<<endl;
        cout<<amit.health<<endl;
        cout<<amit.name<<endl;

    }