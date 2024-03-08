// WAP to count digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int n, count=0, sum=0,x;
    cout<<"Enter your number: 4654";
    cin>>n;
    int a=n;
        while(n>0){
          x=n%10; // gives last digit
          sum+=x; // add last digit to sum
          n/=10; // decrease the number of digits
          count++; // counts the number of digits or loop
    }
    if(a==0) cout<<"Number of digits: 1"<<endl;
        else{
        
        cout<<"Number of digits: "<<count<<endl;}
        cout<<"sum of digits: "<<sum;
}