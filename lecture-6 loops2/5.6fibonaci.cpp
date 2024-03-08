
#include<iostream>
using namespace std;

int main(){
    int n;
    int x=1,y=1,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    for(int i=1;i<=n-2;i++){  
       sum=x+y;
       x=y;
       y=sum;

    }
       cout<<y; // sum ko isliy ni lia q ki 1 and 2 term p '0'
                        // aara ha
}