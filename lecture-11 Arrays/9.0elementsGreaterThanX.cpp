#include <iostream>
#include <climits>  // for INT_MIN 
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Your Elements: ";
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
        
        int count=0;
        int x;
        cout<<"Enter your number: ";
        cin>>x;
        for(int i=0; i<=n-1; i++){
            if(arr[i]>x)
            count++;
        }
        cout<<"Number of elements greater than x: "<<count;
        


    return 0;
}