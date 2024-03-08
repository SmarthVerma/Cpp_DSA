#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   cout<<"Enter first no.: ";
   cin>>a; 
   cout<<"Enter second no.: ";
   cin>>b; 
   cout<<"Enter third no.: ";
   cin>>c; 

   if(a>b && a>c){
    cout<<a<<" is the largest";
   }
    if(b>c && b>a){
    cout<<b<<" is the largest";
   }
    if(c>b && c>a){
    cout<<c<<" is the largest";
   }


  }