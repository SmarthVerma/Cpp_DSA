#include <iostream>
using namespace std;

int main(){
    int x=87;
    int* p=&x;
    cout<<x<<endl;
    x=6;
    cout<<*p<<endl;
    *p= 49;
    cout<<x;
}