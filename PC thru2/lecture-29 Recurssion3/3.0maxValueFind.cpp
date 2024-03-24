#include <iostream>
#include <climits>
using namespace std;

void display_max(int arr[], int max, int n, int idx){
    if(idx==n){
        cout<<"max is "<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    display_max(arr,max,n,idx+1);

}

int maxInArray(int arr[], int max, int n, int idx){
    if(idx==n){
        return max;
    }
    if(max<arr[idx]) max=arr[idx];
    maxInArray(arr,max,n,idx+1);
}

int main(){
    int arr[]={56,64,213,48,79,1,3,4,6,7,99,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int max=INT_MIN;

    display_max(arr,max, n, 0);
    int foundIt=maxInArray(arr,max,n,0);

    cout<<"\nLook what i fouund: "<<foundIt;
}