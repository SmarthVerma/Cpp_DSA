#include <iostream>
using namespace std;

int main(){
    // display 1,3,5,7,9.... upto n times
   int a=4;
    int n;
    cout<<"enter your number: ";
    cin>>n;
   
            // for(int i = 1; i<=2*n-1; i+=2){
            //   cout<<i<<endl;
            // }
            for(int i=1;i<=n;i++){
                cout<<a<<endl;
                a = a+3;
            }
  }
