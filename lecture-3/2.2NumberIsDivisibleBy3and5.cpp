// take positive integer input and tell if it is divisible by 5 and 3.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
        if(n%5==0 && n%3==0){
            cout<<"Your number is divisible by 3 and 5";
        }
        else{
            cout<<"Number not divisivle by 3 and 5";
        }


  }