#include <iostream>
using namespace std;

long int square(int n){
    
    return n*n;
}
int numberofdigit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    
    return count;
    
}
int main(){
    cout<<"Enter your number: ";
    int n;
    cin>>n;
    cout<<numberofdigit(n)<<" "<<square(n);
    
}