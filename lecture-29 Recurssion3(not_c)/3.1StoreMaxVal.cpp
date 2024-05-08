#include <iostream>
#include <climits>
using namespace std;



int maxInArray(int arr[], int n, int idx){
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1)); 
}

int main(){
    int arr[]={56,64,213,48,79,1,3,4,6,7,99,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxInArray(arr,n,0);
}