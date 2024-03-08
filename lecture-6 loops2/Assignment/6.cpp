#include <iostream>
using namespace std;

    int main(){
        int n;
        
        int lastDigit=0,r=0;
        cout<<"Enter your number: ";
        cin>>n;
        int f = n;
            for(int i=1; n>0; i++){
                lastDigit=n%10;
                r=r*10;
                r=r+lastDigit;
                n/=10;
          }
            cout<<f+r<<" ["<<f<<"+"<<r<<"]";

        return 0;
    }