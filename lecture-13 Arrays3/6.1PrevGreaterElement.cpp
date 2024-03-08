#include <iostream>
using namespace std;

int main(){
    int arr[]=  {0,1,0,2,1,0,1,3,2,1,2,1};
        int n=sizeof(arr)/sizeof(arr[0]);

        int arr2[n];

        int prev=arr[0];
        arr2[0]=-1;
        for(int i=1; i<n; i++){
            arr2[i]=prev;
            if(arr[i]>=prev){
                prev=arr[i];
            }
        }

        for(int i=0; i<n; i++){
            cout<<arr2[i]<<" ";
        }
        
}