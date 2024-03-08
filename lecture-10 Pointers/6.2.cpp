#include <iostream>
using namespace std;
   int main(){
    int x=8;
    int* ptr= &x;
    cout<<*ptr<<"\n";
    (*ptr)++;    // Advised to put in bracket
    cout<<*ptr<<endl;
    --(*ptr);
    cout<<*ptr;
    
    return 0;
    }