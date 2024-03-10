            // First we do with simple loop

#include <iostream>
using namespace std;

    int fact(int n){
        if(n<=0) return 1;  //base case
        return n* fact(n-1);

    }


    int main(){
        cout<<"Enter the factorial of number: ";
        int n;
        cin>>n;

        factUpTo(n);


    }