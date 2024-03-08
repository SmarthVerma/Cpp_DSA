#include <iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int a=1;
        int b=1;
        int sum=0;
        if(n==0)
            cout<<" ";
            else  cout<<a<<" ";
            for(int i=1; i<=n-1; i++){
                
                sum=a+b;
                
                cout<<b<<" ";
                a=b;
                b=sum;
            }
        
        return 0;
    }