// We know hcf(a,b)<= min(a,b)
#include <iostream>
using namespace std;

int gcd(int a, int b){
    int hcf=1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0) 
        hcf=i;
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Highest common factor: "<<gcd(a,b);

}