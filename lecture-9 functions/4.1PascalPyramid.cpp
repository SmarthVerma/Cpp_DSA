#include <iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    }
    return f;5
}

int combination(int n, int r){
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;    
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
        
        for(int i=0; i<=n-1; i++){
            for(int j=0; j<=n-i; j++){
                cout<<" ";
            }
            for(int k=0; k<=i; k++){
                cout<<combination(i,k)<<" ";
            }
            cout<<endl;
        }
    

    
}