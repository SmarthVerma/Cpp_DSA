// user input and printing it n times
#include <iostream>
using namespace std;

void morning(int n){
    if(n<=0) return;
    cout<<"GOod morning smarth\n";
    morning(n-1);
}

int main(){
    int n;
    cout<<"How many times you want me to greet you: ";
    cin>>n;
    morning(n);

}