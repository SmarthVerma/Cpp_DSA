#include <iostream>
using namespace std;

void squares(int x){
    int a;
    for(int i=1; i<=x; i++){
        a=i*i;
        cout<<"Square of "<<i<<" is "<<a<<endl; 
        
    }

    return; 
}
int main (){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    squares(n);

    return 0;
}