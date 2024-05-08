#include <iostream>

using namespace std;

    int noOfWays(int n){
        if(n==2) return 2;
        if(n==1) return 1;
        
        int ans=noOfWays(n-1) + noOfWays(n-2);
        return ans;
    }

    int main(){
        cout<<"Enter number of stairs: ";
        int n;
        cin>>n;

        cout<<noOfWays(n);
        
    }