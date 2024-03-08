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
        
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(arr[i]==arr[j]) 
                count++;
            }
            if(count==0){
                cout<<arr[i]<<" is unique value"<<endl;
                
            }
        }
        


    return 0;
}