#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
    int sum=0;
        for(int i=0; i<n; i++){
            if(i%2==0) sum+=arr[i];
            else sum-=arr[i];
        }
        cout<<sum;
}