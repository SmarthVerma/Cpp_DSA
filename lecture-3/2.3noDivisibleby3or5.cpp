// take positive integer input and tell if it is divisible by 5 and 3.

#include <iostream>
using namespace std;

int main(){
    
  int n;
    cout<<"Enter a number: ";
    cin>>n;
        if(n%5==0 || n%3==0){
            if(n%5==0 && n%3==0){
                        cout<<"Number divisble by 3 and 5";
                    }
            else if(n%5==0){
                cout<<"Number is divislbe by 5";
                    
            }
            else{
                cout<<"Number is divisble by 3";
            }
        }
        else{
            cout<<"Number not divisivle by 3 or 5";}

  }