#include <iostream>
using namespace std;

int main(){

    int arr[]={3,4,1,2,6,4,2,5,1,7,11,5,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    bool flag2= false; // no dublicate at all
    for(int i=0; i<=n-1; i++){
        bool flag =false; // no dublicate element
        for(int j=0; j<=n-1; j++){
            if(i==j) continue;
            if(arr[i]==arr[j]) flag=true; // dublicate element found       
        }
        if(flag==false){
            cout<<arr[i];
            flag2=true;
            break;
        }
    }

        if(flag2==false){
            cout<<"No unique element";
        }

    


        



}