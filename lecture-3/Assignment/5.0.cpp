#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first side: ";
    cin>>a;
    cout<<"Enter second side: ";
    cin>>b;
    cout<<"Enter third side: ";
    cin>>c;
            if(a==b && a==c)
            cout<<"Your traingle is equilateral";
            else if(a==b || b==c || b==c)
            cout<<"Your traingle will be isoceles";
            else if(a+b<=c || b+c<=a || a+c<=b)
            cout<<"Your traingle will not be valid";
            else if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b) )
            cout<<"Your traingle is right angle traingle";
            else cout<<"Your traingle will be scalene";

  }