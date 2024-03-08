#include <iostream>
using namespace std;

int main(){
    
    int x=4;

    int* ptr= &x;
    int** p= &ptr;

    cout<<x<<endl;  // value of x
    cout<<ptr<<endl; // x address
    cout<<p<<endl; // ptr address


    return 0;
}