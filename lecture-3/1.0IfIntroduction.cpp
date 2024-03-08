#include <iostream>
using namespace std;

int main(){
    // take postive integer input and tell if it is even or odd

    int n;
    cout<<"Enter positive number: ";
    cin>>n;

    if(n%2==0){
        cout<<"Even";
    }
    if(n%2!=0){
        cout<<"Odd";
    }


    return 0;
  }