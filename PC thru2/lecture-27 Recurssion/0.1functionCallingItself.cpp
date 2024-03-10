#include <iostream>
using namespace std;

void fun(){
    cout<<"Hello world"<<endl;
    fun();
}
void fun2(int n){
    if(n==0) return;
    cout<<"Hello world"<<endl;
    fun2(n-1);
}

int main(){
    // fun(); infinite loop
    fun2(3);
}