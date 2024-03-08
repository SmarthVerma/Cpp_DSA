#include <iostream>
using namespace std;

int main(){
    int a,b,c;
        cout<<"Enter your maths marks: ";
        cin>>a;
        cout<<"Enter your physics marks: ";
        cin>>b;
        cout<<"Enter your chemistry marks: ";
        cin>>c;

        if(a>b && c>b)
        cout<<"Your least scoring marks is physics ";
        else if(b>a && c>a)
        cout<<"your least scroing marks is maths ";
        else 
        cout<<"Your least scoring marks is chemistry";

    
  }