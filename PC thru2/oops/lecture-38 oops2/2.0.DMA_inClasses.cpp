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



int main(){

    player amish;  //compile tinme, static alloc
    player devank;  //compile time,  static alloc
    player *smarth= new player //run-time,  dynamic alloc


        amish.setAge(21);
        amish.setAlive(true);
        amish.setHealth(78);
        amish.setScore(37);
      
        devank.setAge(28);
        devank.setAlive(true);
        devank.setHealth(91);
        devank.setScore(12);

        // smarth.setAge(456);  // wrong way
        (*smarth).setAge(56); 
        smarth->getAge(65); // most used way

    


    


}