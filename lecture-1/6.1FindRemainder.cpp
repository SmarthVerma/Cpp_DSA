#include<iostream>
using namespace std;

int main(){
   
   //take two integers 'a' and 'b' and divide 'a' by 'b' and fint their remainder

    // To solve:   divident =divisor*quotient+remainder


    int a = 19; // a means divident
    int b = 3; // b means divident
    float q = (a)/b; // q is quotient
    
    int r = a-(b*q); // r is remainder

    cout<<"Your remainder is: "<<r<<endl;
    cout<<"your quotient is: "<<q;



}