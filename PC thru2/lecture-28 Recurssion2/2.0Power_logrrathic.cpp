#include <iostream>

using namespace std;

    long long pow(int a,int n){         //time complex and space complex o(logn)
        if(n==1) return a;
        int ans= pow(a,n/2);
        if(n%2==0) return ans*ans;
        else return ans*ans*a;  
    }

    int main(){{
        int a,n;
        cout<<"Enter 'a' and 'n': ";
        cin>>a>>n;

        cout<<pow(a,n);


    }}