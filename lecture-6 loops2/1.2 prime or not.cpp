#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    bool flag = true; // means number is prime
      for(int i=2;i<=n-1;i++){
        if(n%i==0){ // i is a factor of n
            flag=false;
            }
      }
      if(n==1) cout<<"1 is niether composite or prime";
      else if(flag==true) cout<<"Your number is prime number";
      else cout<<"Your number is composite";
         return 0;
}

// by using boolean we can store state