#include <iostream>
using namespace std;

void printin(int n){
    if(n==0) return; //base case
    cout<<"Yout number is: "<<n<<endl; //kaam
    return printin(n-1); //call
    
}


int main(){
    cout<<"ENter the number n: ";
    int n;
    cin>>n;
    printin(n);




}