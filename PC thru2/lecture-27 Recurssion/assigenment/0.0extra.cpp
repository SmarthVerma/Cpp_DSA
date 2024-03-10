#include <iostream>

using namespace std;

void palodrome(int n){
    if(n<=0) return;

    cout<<n<<" ";
    palodrome(n-1);
    cout<<n<<" ";

}

int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;

    palodrome(n);
}