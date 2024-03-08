#include <iostream>
using namespace std;
    int main (){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int m=n-1;
        int a=65;
        for(int i=1; i<=2*n-1; i++){
            cout<<(char)a;
            a++;
        }
        cout<<endl;
        
            for(int i=1; i<=m; i++){
                a=65;
                for(int j=1; j<=n-i; j++){
                    cout<<(char)a;
                    a++;
                }
                for(int k=1; k<=2*i-1; k++){
                    cout<<" ";
                    a++;
                }
                for(int j=1; j<=n-i; j++){
                    cout<<(char)a;
                    a++;               
                }

                cout<<endl;
            }

        return 0;
    }