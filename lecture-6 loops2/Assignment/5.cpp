#include <iostream>
using namespace std;

    int main(){
        int n,last;
        int sum=0;
        cout<<"ENter your number: ";
        cin>>n;
            for(int i=1; n>0; ){
                last=n%10;
                if(last%2==0) sum+=last;
                n/=10;
          }
            cout<<"your sum is: "<<sum;

        return 0;
    }