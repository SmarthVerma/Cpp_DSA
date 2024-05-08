#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bike{
    public:
        int tyreSize;

        bike(int a){
            tyreSize=a;
        }
};

int main(){

        bike kawasaki(1);
        bike honda(7);
        bike splender(2);


        cout<<kawasaki.tyreSize<<endl;
        cout<<honda.tyreSize<<endl;
        cout<<splender.tyreSize<<endl;

}