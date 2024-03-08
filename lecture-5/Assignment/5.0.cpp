

#include<iostream>
using namespace std;

int main(){
    int n;
    int a=3;
    cout<<"Enter value of n: ";
    cin>>n;
        for(int i=1; i<=n; i++){
            cout<<i<<")"<<a<<endl;
            a*=4;
        }
    
    return 0;
}