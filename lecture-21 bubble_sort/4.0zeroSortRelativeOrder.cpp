// Push zeroes to end while maintaining the relative order of other elements.
    // arr={5,0,1,2,0,0,4,0,3}
    // arr={5,1,2,4,3,0,0,0,0}

#include <iostream>
using namespace std;

int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=sizeof(arr)/sizeof(arr[0]);

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<n-1; i++){
            bool flag=true;
            for(int j=0; j<n-1-i; j++){
                if(arr[j]==0){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=false;
                }
            }
            if(flag==true) break;
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }


}