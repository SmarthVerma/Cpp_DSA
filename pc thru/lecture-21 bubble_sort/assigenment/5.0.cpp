// Check if the given array is almost sorted. (elements are at-most one position away)

// Sort the array in descending order using Bubble Sort.

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[]={4,2,7,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
            
            
           int count=0;
            int max=0;
        for(int i=0; i<n-1; i++){   
            bool flag= true;
            count=0;
            for(int j=0;j<n-1-i; j++){
                if(arr[j]>arr[j+1]){    
                    count++;
                    swap(arr[j],arr[j+1]);  
                    flag=false;
                }
                
            }
            if(count>max) max=count;
            if(flag==true){ 
                break;
            }
        }
        cout<<max<<endl;
        if(max<=1){
            cout<<"Nearly sorted";
        }else cout<<"Not nearly sorted";
}