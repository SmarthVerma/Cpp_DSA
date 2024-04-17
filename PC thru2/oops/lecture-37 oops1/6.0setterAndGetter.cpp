#include <iostream>
#include <string>

using namespace std;

    class status{
        private:      //for security
        int score;
        int health;

        public:
        //setter
        void setScore(int s){
            cout<<"Called by: ##"<<endl;; //logging
            score=s; 
        }
        void setHealth(int h){
            cout<<"Called by: ##"<<endl; //logging
            health=h; 
        }
        //getter
        void getScore(){
            cout<<score<<endl;
        }
        void getHealth(){
            cout<<health<<endl;
        }
        
    };


int main(){
    status sammy;
        sammy.setScore(46);
        sammy.setHealth(6);
        
        sammy.getScore();
        sammy.getHealth();
}
