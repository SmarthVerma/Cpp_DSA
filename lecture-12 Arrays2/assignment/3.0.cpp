#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }

    bool flag =false;
    for(int i=0; i<n; i++){
        if(i==n-1) break;
        if(arr[i]<=arr[i+1]) flag=true;
        else {
        flag=false;
        break;
        }
    }x
    if(flag==false){
     for(int i=0; i<n; i++){
        if(i==n-1) break;
        if(arr[i]>=arr[i+1]) flag=true;
        else {
        flag=false;
        break;
        }
    }
}
    if(flag==true){
        cout<<"Your array is sorted";
    } else cout<<"Not sorted";
}