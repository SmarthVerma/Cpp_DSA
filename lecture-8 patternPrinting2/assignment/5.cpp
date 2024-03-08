#include <iostream>
using namespace std;
    int main (){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int m=n-1;
        int a=1;
        for(int i=1; i<=2*n-1; i++){
            cout<<a;
            
            if(i<n) a++;
            else a--;
        }
        cout<<endl;
        
            for(int i=1; i<=m; i++){
                a=1;
               
                for(int j=1; j<=n-i; j++){
                    cout<<a;
                    a++;
                    
                }
                for(int k=1; k<=2*i-1; k++){
                    cout<<" ";
                    a++;
                    
                }
                for(int j=1; j<=n-i; j++){
                    cout<<2*n-a;
                    a++;            
                }

                cout<<endl;
            }

        return 0;
    }