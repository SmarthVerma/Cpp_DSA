#include <iostream>

using namespace std;

//'a' raised to power 'b'
double power(int a, int b){
    if(a==0 || b==0){
        cout<<"0 raised to the power 0 is not defined. Error ";
        return -1;
    }
    if(a==0) return 0;
    if(b==0) return 1; //base case
    if(b<0){
        return 1.0/ (a* power(a,-b-1)); 
    }
    return a* power(a,b-1);  //-b taaki b ki value postive aajay
}

int main(){

    int a,b;
    cout<<"Enter the values of 'a' and 'b': ";
    cin>>a>>b;

    cout<<power(a,b);

}
