// WAP to count digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int lastdigit=0,r=0;
    

        while(n>0){
            lastdigit=n%10; // gets last digit
            r*=10;          // multiply itself by 10
            r+=lastdigit;   // add last digit in r varaible
            n/=10;          // decrease digits
        }
        cout<<r;
}