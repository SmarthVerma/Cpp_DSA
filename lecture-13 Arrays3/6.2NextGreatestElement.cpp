#include <iostream>
using namespace std;

int main(){
    int arr[]=  {0,1,0,2,1,0,1,3,2,1,2,1};
        int n=sizeof(arr)/sizeof(arr[0]);

        int arr3[n];
        int next=arr[n-1];
        arr3[n-1]=-1;
        for(int i=n-2; i>=0; i--){
            arr3[i]=next;
            if(arr[i]>next){
                next=arr[i];
            }
        }
         for(int i=0; i<n; i++){
            cout<<arr3[i]<<" ";
        }
}