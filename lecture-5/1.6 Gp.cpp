#include <iostream>
using namespace std;

int main(){
    // display 1,2,4,8,16,32.... upto n times
   
    int a;
    cout<<"Enter your first number: ";
    cin>>a;
    int n;
    cout<<"enter n times: ";
    cin>>n;
    
    
    cout<<"Enter common ratio: ";
    int d;
    cin>>d;
            
            for(int i=1;i<=n;i++){      //efficient code
                cout<<a<<endl;
                a = a*d;
            }
  }
