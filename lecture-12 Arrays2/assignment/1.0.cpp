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
        
        int count =0;
        int x;
        cout<<"Enter your target: ";
        cin>>x;

        for(int i=0; i<n; i++){
            if(arr[i]>x) count++;
        }
        cout<<"Number of elements greater than X: "<<count;
}