            // First we do with simple loop

#include <iostream>
using namespace std;

    int fact(int n){
        int f=1;
            for(int i=1; i<=n; i++){
                f*=i;
            }
            return f;

    }

    void factUpTo(int n){  
 
        int f=1;
        // for(int j=1; j<=n; j++){
        //     f=1;
        //     for(int i=1; i<=j; i++){
        //         f*=i;
        //     }
        //     cout<<f<<endl;
        // }

        for(int i=1; i<=n; i++){
            f*=i;
            cout<<f<<endl;
        }

    }

    int main(){
        cout<<"Enter the factorial of number: ";
        int n;
        cin>>n;

        factUpTo(n);


    }