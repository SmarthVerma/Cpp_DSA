//Take positve integer input and tell if it is divisible by 5 or 3 but not divisible by15
#include <iostream>
using namespace std;

int main(){

    
  int n;
    cout<<"Enter a number: ";
    cin>>n;
    //     if((n%5==0 || n%3==0) && n%15!=0){
            
    //         cout<<"Number is divisivle by 3 or 5 but not 15";}
    //     else{
    //         cout<<"not matching the conditions";
    // }

        if(n%5==0 || n%3==0){
            if(n%15!=0){
                cout<<"The number is divisble by 3 or 5 but not 15";
            }  else{
                cout<<"Not matching condition";
            }      }
        else{
            cout<<"Not matching condition";
        }
  
}


  