#include <iostream>
using namespace std;

int main(){

    int arr[]={1,3,0,6,1,0,8,9,0,2};

    int n= sizeof(arr)/sizeof(arr[0]);

        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]!=0) i++;
            if(arr[j]==0) j--;
            if(arr[i]==0 && arr[j]!=0){
                int temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }

        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    


}