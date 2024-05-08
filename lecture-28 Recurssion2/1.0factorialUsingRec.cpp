#include <iostream>

using namespace std;

    int fiboOfTerm(int n){
        if(n==1 || n==2) return 1;
        return fiboOfTerm(n-1)+fiboOfTerm(n-2);
    }

    int main(){
        cout<<"Enter the nth term of fibonacci series: ";
        int n;
        cin>>n;
        cout<<fiboOfTerm(n);
    }