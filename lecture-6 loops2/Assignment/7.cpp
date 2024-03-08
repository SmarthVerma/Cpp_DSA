#include <iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int m=n;
        int fact=1;

        for(int j=1; j<=m; j++){ 
            n=j;    
            for(int i=1; i<=n; i++){
                fact*=i;
            }
            cout<<"Factorial of "<<j<<" is: "<<fact<<endl;
            fact=1;
        }
        return 0;
    }