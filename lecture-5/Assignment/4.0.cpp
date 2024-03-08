

#include<iostream>
using namespace std;

int main(){
    int n;
    int a=4;
    cout<<"Enter value of n: ";
    cin>>n;
        for(int i=1; i<=n; i++){
            cout<<i<<")"<<a<<endl;
            a+=3;
        }
    
    return 0;
}