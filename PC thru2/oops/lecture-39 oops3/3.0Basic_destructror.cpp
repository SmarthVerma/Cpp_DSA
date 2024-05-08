#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bike{
    public:
        int tyreSize;
        int engine;

            // values initialize karo
        bike(int tyreSize, int engine=220){
            this->tyreSize=tyreSize;
            this->engine=engine;
        }
        // destructor is called wheb object goes out of scope!
        ~bike(){
            cout<<"destructor call hua"<<endl;
        }
};

int main(){

        bike kawasaki(1);
        bike honda(7,76);
        bike splender(2);

        bool flag=true;

        if(flag){
            bike jabar(4,131);
            cout<<jabar.tyreSize<<" "<<jabar.engine<<endl;
        }


        cout<<kawasaki.tyreSize<<" "<<kawasaki.engine<<endl;
        cout<<honda.tyreSize<<" "<<honda.engine<<endl;
        cout<<splender.tyreSize<<" "<<splender.engine<<endl;

}