#include <iostream>
using namespace std;

void display(int *a, int m){
    for(int i=0; i<m; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};

    int n= sizeof(height)/sizeof(height[0]);

            // prev greatest element
    int arr1[n];
    int prev=height[0];
    arr1[0]=-1;

    for(int i=1; i<n; i++){
        arr1[i]=prev;
        if(height[i]>prev)
        prev=height[i];
    }
    
    int arr2[n];
    int next=height[n-1];
    arr2[n-1]=-1;
    int water=0;
    for(int i=n-2; i>=0; i--){
        arr2[i]=next;
        if(height[i]>next){
            next=height[i];
        }
        arr2[i]=min(arr1[i],arr2[i]);
        if(height[i]<arr2[i]){
            water+=arr2[i]-height[i];
        }
    }
    
    
    

    

    

    cout<<"Total water can store: "<<water;
}