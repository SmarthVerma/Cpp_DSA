#include <iostream>
#include <climits>  // for INT_MIN 
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Your numbers: ";
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
    int min=INT_MAX;
        for(int i=0; i<=n-1; i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        cout<<"Your minimum value: "<<min;


}