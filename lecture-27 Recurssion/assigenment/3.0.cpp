// Given a positive integer, return true if it is a power of 2.
#include <iostream>

using namespace std;

    bool isPower2(int n){
        if(n==0) return false;
        if(n==1) return true;

        if(n%2==0){
            return isPower2(n/2);
        } else return false;

    }

    int main(){
        int n;
        cout<<"Enter the positive interger number: ";
        cin>>n;
        bool check=isPower2(n);
            if(check){
                cout<<"Yes, "<<n<<" is the power of 2";
            }
            else cout<<"No, "<<n<<" is not the power of 2";



    }