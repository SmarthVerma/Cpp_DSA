#include <iostream>
#include <climits>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=n; i>0; i--){
        f*=i;
    }
    return f;
}

int main(){

    int arr[]={5,6,2,3,4,5,2,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    int max=INT_MIN;
        for(int i=0; i<n; i++){
            if(max<arr[i]) max=arr[i];
        }

        cout<<"Factorial of largest element: "<<factorial(max);
}