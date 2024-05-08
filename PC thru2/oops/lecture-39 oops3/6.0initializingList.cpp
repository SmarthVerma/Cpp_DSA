#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bike{
    public:
        int tyreSize;
        int engine;

 
        bike(int tSize, int eng): tyreSize(tSize), engine(eng){}
};

int main(){

        bike kawasaki(1,56);
        bike honda(7,76);
        bike splender(2,67);


        cout<<kawasaki.tyreSize<<" "<<kawasaki.engine<<endl;
        cout<<honda.tyreSize<<" "<<honda.engine<<endl;
        cout<<splender.tyreSize<<" "<<splender.engine<<endl;

}