/*
    1234
    123
    12
    1
*/
#include<iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        
        for(int i=1;i<=n;i++){
            for (int j=1; j<=n+1-i; j++)   // no of stars=n+1-i
            {
                cout<<j;

            }
        cout<<endl;
            
        }


    }
