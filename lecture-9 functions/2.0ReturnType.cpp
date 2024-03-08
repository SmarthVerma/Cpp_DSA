#include <iostream>
#include <cmath>
using namespace std;

float sum(float x, float y){
    return x+y;
}

float mini(float x, float y){
    float a;
    if(x<y) a=x;
    else a=y;

    return a;
}

void fun(int x, int y){
    int a= x+y;
    cout<<a;
}

int funb (int x, int y){
    cout<<"Yellpwww"<<endl; 
    return x-y;
}

int main(){
    float x,y;
    cout<<"Enter your numbers: ";
    cin>>x>>y;
        cout<<sum(x,y)<<endl;
        cout<<mini(x,y)<<endl;
        fun(x,y);
        cout<<endl;
        cout<<funb(x,y);
        cout<<endl;
        // SQUARE ROOT
        cout<<sqrt(11);
    
}