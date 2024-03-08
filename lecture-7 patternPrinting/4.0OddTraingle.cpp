/*
   1
   13
   135
   1357
*/
#include<iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        
        // for(int i=1;i<=n;i++){
        //     for (int j=1; j<=i*2-1; j+=2)
        //     { 
        //         cout<<j;
        //     }
        // cout<<endl;
            
        // }

        for(int i=1;i<=n;i++){
                int a=1;
            for (int j=1; j<=i; j++)
            { 
                cout<<a;
                a+=2;
            }
        cout<<endl;
            
        }


    }
