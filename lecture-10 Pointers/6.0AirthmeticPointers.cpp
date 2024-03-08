#include <iostream>
using namespace std;
   int main(){
    int x=8;
    int* ptr= &x;
    cout<<ptr<<endl;
    ptr= ptr +2;
    cout<<ptr<<endl;

    bool flag=true;
    bool* p1= &flag;
    cout<<p1<<endl;
    p1+=1;
    cout<<p1;
    
    return 0;
    }