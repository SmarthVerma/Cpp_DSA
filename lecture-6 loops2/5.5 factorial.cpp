// print the given factorial
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int prod=1;
        for(int i=1;i<=n; i++){
            prod*=i;
         }
        cout<<prod;
        
   
}