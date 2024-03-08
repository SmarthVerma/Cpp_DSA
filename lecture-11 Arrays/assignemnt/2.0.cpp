#include <iostream>
#include <climits>
using namespace std;

    int main(){
     int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
        int max=INT_MIN;
        int index;
        for(int i=0; i<=n-1; i++){
            if(max<arr[i]){
                max=arr[i];
                index=i;
            }
        }
        int max2=INT_MIN;
          for(int i=0; i<=n-1; i++){
            if(max2<arr[i] && index!=i){
                max2=arr[i];              
            }
        }

        cout<<"Second max: "<<max2;

    }