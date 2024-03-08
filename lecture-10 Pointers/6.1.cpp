#include <iostream>
using namespace std;
   int main(){
    int x=8;
    int* ptr= &x;
    cout<<*ptr<<"\n";
    ptr=ptr+1;  // because of this
    cout<<*ptr; // garbage value aaygi
    
    return 0;
    }