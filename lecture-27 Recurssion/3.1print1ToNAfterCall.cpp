#include <iostream>
using namespace std;

void print1ToN(int n){
    if(n<=0) return; //base case
    print1ToN(n-1); //call
    cout<<n<<endl;  //kaam

}

int main(){
    cout<<"Enter the number n: ";
    int n;
    cin>>n;

    print1ToN(n);

}