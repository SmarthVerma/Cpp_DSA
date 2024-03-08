#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1 numberL: ";
    cin>>a;
    cout<<"Enter 2 numberL: ";
    cin>>b;
    cout<<"Enter 3 numberL: ";
    cin>>c;

            if(a>b){
                if(a>c){
                    cout<<a<<" is the greatest";
             
                }
                else{
                    cout<<c<<" is the greatest";
                }
            }
                else{
                    if(b>c){
                    cout<<b<<" is the greatest";
                    }
                    else{
                        cout<<c<<" is the greatest";
                    }
            }

  }