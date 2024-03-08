#include <iostream>
using namespace std;

int a =5; // GLOBAL VARIABLE

void fun(){
    a+=6; // (5+6=11)
    cout<<a+9<<endl; //(20)
}

int main(){ // (always main function chlta h)
    
    cout<<a<<endl; //(5)
    fun();
    cout<<a; //(11)
}