// using extra parameter
#include <iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return; //base acall
    cout<<i<<endl;  //kaam
    return print(i+1, n); //call
}

int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;

    print(1,n);
}