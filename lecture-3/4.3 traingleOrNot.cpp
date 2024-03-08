#include <iostream>
using namespace std;

int main(){
    
        int a,b,c;
    cout<<"Enter 1 side: ";
    cin>>a;
    cout<<"Enter 2 side: ";
    cin>>b;
    cout<<"Enter 3 side: ";
    cin>>c;
        
        
       if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"Traingle is possible";
       }
       else{
        cout<<"Traingle is not possible";
       }

     

  }