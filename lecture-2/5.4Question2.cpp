#include <iostream>
using namespace std;

int main(){
    //Take float input and print the fractional part of the real number
    float x;
    cin>>x;

    int y= (int)x;
    if(y<0) y= y-1; 
    x=x-y;

    cout<<x;
  }