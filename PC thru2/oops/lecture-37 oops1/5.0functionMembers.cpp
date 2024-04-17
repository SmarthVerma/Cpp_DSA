#include <iostream>
#include <string>

using namespace std;

    class status{
        public:
        string name;
        int score;
        int health;

        void showHealth(){
            cout<<"Health is: "<<health;
        }

        void showScore(){
            cout<<"Score is: "<<score;
        }
    };

    class calculator{
        public:
        int a;
        int b;

        void sum(){
            cout<<a+b<<endl;
        }
        void sub(){
            cout<<a-b<<endl;
        }
    };

    class test{   /// WoW works
        public:
        int a=5;
        int b=7;

        void sum(){
            cout<<a+b;
        }
    };

int main(){
    status shivu;

        shivu.name="smarth";     
        shivu.score=436;          
        shivu.health=5;      

        shivu.showScore();
        cout<<endl;

    calculator calci;

    calci.a=5;
    calci.b=9;

    calci.sum();
    calci.sub();

    test testi;

    testi.sum();
                
}
