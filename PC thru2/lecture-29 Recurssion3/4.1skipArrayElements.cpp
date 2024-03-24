#include <iostream>
using namespace std;

void removing_one(int arr[],int newarr[], int newSize,int n,int idx){
    if(idx==n) return;
    if(arr[idx]!=1){
        newarr[newSize]=arr[idx];
        removing_one(arr,newarr, newSize+1,n,idx+1);
    }
    else{
        removing_one(arr,newarr,newSize,n,idx+1);
        newarr[newSize]=arr[idx];
    }    
}

int main(){
    int arr[]={4,7,2,1,9,5,1,69};
    int n=sizeof(arr)/sizeof(arr[0]);

    int newarr[15];
    removing_one(arr,newarr,0,n,0);
        for(int ele : newarr){
            cout<<ele<<" ";
        }






}