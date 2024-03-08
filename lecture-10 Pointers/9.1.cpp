#include <iostream>
using namespace std;

int main(){
    
    int x=4;

    int* ptr= &x;
    int** p= &ptr;

    cout<<x<<endl;  // value of x
    cout<<*ptr<<endl; // value of x
    cout<<**p<<endl; // value of x


    return 0;
}