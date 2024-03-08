#include <iostream>
using namespace std;

int a =5; // GLOBAL VARIABLE

void fun(){
    
    cout<<a<<endl; 
}

int main(){  
//  int a= 9; ( meaing local variable bna dia h)
    cout<<a<<endl;
    a=9; // chaning value of global variable
    fun();
}