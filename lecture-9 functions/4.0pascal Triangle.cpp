#include <iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    }
    return f;
}

int combination(int n, int r){
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;    
}
// int permutaion(int n, int r){
//     int npr= fact(n)/fact(n-r);
//     return npr;
// }

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
        
        for(int i=0; i<=n-1; i++){
            for(int j=0; j<=i; j++){
                cout<<combination(i,j)<<" ";
            }
            cout<<endl;

        }

    

    
}