// WAP to count digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter your number: ";
    cin>>n;
    int a=n;
        
        for(;n!=0;){
            n/=10;
             count++;
            
        }
        if(a==0) cout<<"1";
        else
        cout<<"Number of digits: "<<count;
}