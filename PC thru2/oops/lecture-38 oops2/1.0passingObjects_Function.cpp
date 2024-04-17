#include <iostream>
#include <string>

using namespace std;

    class player{
        private:
            int health;
            int score;
            int age;
            bool alive;
        public:
       
        void setHealth(int health){
        this->health=health;
        }
        void setScore(int score){
        this->score =score;
        }
        void setAge(int age){
        this->age =age;
        }
        bool setAlive(bool alive){
        this->alive =alive;
        }

        int getHealth(){
            return health;
        }

        int getScore(){
            return score;
        }

        int getAge(){
            return age;
        }

        bool getAlive(){
            return alive;
        }
    };

    player highHealth(player a, player b){
        player c;
            if(a.getHealth()>b.getHealth()){
                c.setHealth(a.getHealth());
            }else c.setHealth(b.getHealth());
        return c;
    }

int main(){

    player amish;
        amish.setAge(21);
        amish.setAlive(true);
        amish.setHealth(78);
        amish.setScore(37);
    
    
    player devank;
        devank.setAge(28);
        devank.setAlive(true);
        devank.setHealth(91);
        devank.setScore(12);

    player smarth;
    smarth=highHealth(amish,devank);

    cout<<"Highest Health: "<<smarth.getHealth();
    


}