#include <iostream>
#include <climits>
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
    int max1= INT_MIN;
    int max2= INT_MIN;
    int max3= INT_MIN;

        for(int i=0; i<n; i++){
            if(arr[i]>max1){
                max1=arr[i];
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]>max2 && arr[i]!=max1){
                max2=arr[i];
            }
        }
         for(int i=0; i<n; i++){
            if(arr[i]>max3 && arr[i]!=max1 && arr[i]!=max2){
                max3=arr[i];
            }
        }

cout<<"1stLargest: "<<max1<<endl<<"2ndlargest: "<<max2<<endl<<"3rdlargest: "<<max3;
}