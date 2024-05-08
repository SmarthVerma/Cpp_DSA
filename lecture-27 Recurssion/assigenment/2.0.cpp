// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.

#include <iostream>

using namespace std;


    int numberWays(int n){
        if(n<0) return 0;
        if(n==0) return 1;
        return numberWays(n-1)+numberWays(n-2)+numberWays(n-3);
        }

    int main(){
        cout<<"Enter the number n stairs: ";
        int n;
        cin>>n;
        cout<<numberWays(n)<<endl;

       





    }