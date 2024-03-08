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
        
        int max=INT_MIN;
        for(int i=0; i<=n-1; i++){
            if(max<=arr[i]) {
            max=arr[i];    
            }
        }
        cout<<"maximum number: "<<max<< " ";
        int max2=INT_MIN;
         for(int i=0; i<=n-1; i++){
            if(max2<=arr[i] && arr[i]!=max) {
            max2=arr[i];
                
            }
        }
        cout<<"Second maximum number: "<<max2;


    return 0;
}