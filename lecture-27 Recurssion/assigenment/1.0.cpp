// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include <iostream>

using namespace std;

int sumOdd(int a, int b){
    if(a>b) return 0;
    if(a%2==0) a=a+1; 
    if(b%2==0) b=b-1;
        
    return a+sumOdd(a+2,b);
    
}

int main(){
    cout<<"Enter the values of a and b: ";
    int a,b;
    cin>>a>>b;

    cout<<sumOdd(a,b);



}