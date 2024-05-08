#include <iostream>

using namespace std;

int sum(int n){
    if(n<=0) return 0;
    return n+sum(n-1);
}

void sum1toN(int sum, int n){
    if(n==0){
        cout<<"Sum is "<<sum;
        return; 
    }
    return sum1toN(sum+n, n-1);
}

int main(){
    cout<<"ENter the number: ";
    int n;
    cin>>n;

    // cout<<sum(n);
    sum1toN(0,100);


}