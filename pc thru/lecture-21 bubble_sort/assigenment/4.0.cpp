// Sort the array in descending order using Bubble Sort.

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[]={7,-6,-1,3,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
            
            //BUBBLE SORT OPTIMIZED TO MAX!
            
        for(int i=0; i<n-1; i++){   //n-1 passes max
            bool flag= true;
            for(int j=0;j<n-1-i; j++){
                if(arr[j]<arr[j+1]){    // swap
                    swap(arr[j],arr[j+1]);  
                    flag=false;
                }
            }
            if(flag==true){ // swapping nahi hui, mtlb sorted ha
                break;
            }
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}