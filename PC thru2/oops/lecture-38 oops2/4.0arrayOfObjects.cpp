#include <iostream>
#include <string>

using namespace std;

    class Gun{
        private:
            int ammo;
            int dmg;
            int scope;
        public:
            void setAmmo(int ammo){
                this->ammo=ammo;
            }
            void setDmg(int dmg){
                this->dmg=dmg;
            }
            void setScope(int scope){
                this->scope=scope;
            }
            int getAmmo(){
                return ammo;
            }
            int getDmg(){
                return dmg;
            }
            int getScope(){
                return scope;
            }
    };

    class player{
                private:
        class Helmet{
                int hp;
                int level;
                public:
                 void setHp(int hp){
                    this->hp=hp;
                 }
                 void setLevel(int level){
                    this->level=level;
                 }
                 int getHp(){
                    return hp;
                 }
                 int getLevel(){
                    return level;
                 }
            };
        private:
            int health;
            int score;
            int age;
            bool alive;
            Gun gun;
            Helmet helmet;
            
        
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

        void setGun(Gun gun){
            this->gun=gun;
        }

        Gun getGun(){
            return gun;
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

        void setHelemt(int level){
            Helmet *helmet = new Helmet;
            helmet->setLevel(level);
            int health;
            if(level==1){
                health=35;
            }
            else if(level==2){
                health=45;
            }
            else if(level==3){
                health=55;
            }
            else cout<<"Invalid";

            helmet->setHp(health);
            this->helmet=*helmet;
        }
        Helmet getHelmet(){
            return helmet;
        }
    };



int main(){

       Gun akm;
       akm.setAmmo(30);
       akm.setDmg(22);
       akm.setScope(0);

       Gun awm;
       awm.setAmmo(10);
       awm.setDmg(75);
       awm.setScope(2);
    player amish;  //compile tinme, static alloc
    player devank;  //compile time,  static alloc



        amish.setAge(21);
        amish.setAlive(true);
        amish.setHealth(78);
        amish.setScore(37);
        amish.setGun(akm);
        amish.setHelemt(1);
        

        devank.setAge(28);
        devank.setAlive(true);
        devank.setHealth(91);
        devank.setScore(12);
        devank.setGun(awm);
        devank.setHelemt(2);

/// array of objects

    player players[2]={amish,devank};

    Gun test= players[1].getGun();
    cout<<test.getDmg();

}