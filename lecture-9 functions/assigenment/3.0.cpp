#include <iostream>
using namespace std;

void numbers(int a, int b){
    
    if(a>b) {
    numbers(b,a); 
    return;
    }


    if(a%2==0){
        a++;
        for(int i=a; i<b; i+=2){
            cout<<i<<" ";
        }
    }
    else{
        a+=2;
         for(int i=a; i<b; i+=2){
            
            cout<<i<<" ";
        }
    }
}
int main(){
    cout<<"Enter your first number: ";
    int a;
    cin>>a;
    cout<<"Enter your second number: ";
    int b;
    cin>>b;
    numbers(a,b);
}