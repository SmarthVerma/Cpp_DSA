// Creating functions with same name but different parameters
#include <iostream>
using namespace std;

    void adding(int a, int b){
        cout<<a+b;
    }

    void adding(int a){
        cout<<a+10;
    }

    int main(){

            adding(24);
    }