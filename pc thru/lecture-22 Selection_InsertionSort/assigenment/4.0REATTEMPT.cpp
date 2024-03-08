// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int arr[]={5,1,2,9,9,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n;i++){
        int j=i;
        while(j>=1 &&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    
    cout<<"Smalllest number\n";
    for(int ele: arr){
        cout<<ele<<" ";
    }cout<<endl;
    cout<<"Second smallest \n";
    
    vector<int> arr2(n);
    for(int i=0; i<n; i++){
        arr2[i]=arr[i];
    } arr2={1,1,2,5,9,9,7};

    int index=-1;
    for(int i=n-2; i>=0; i--){
            if(arr2[i]<arr2[i+1]){
            index=i;
            break;
            }
        }
        if(index==-1){
            reverse(arr2.begin(),arr2.end());
            return 0;
        }

        //2)sorting after index to end
        reverse(arr2.begin()+index+1, arr2.end());
        
        //3) just greater than idex
        int j;
        for(int i=index+1; i<=n-1; i++){
            if(arr2[index]<arr2[i]){
                j=i;
                break;
            }
        }
        //4) swapping idx with j
        int temp=arr2[index];
        arr2[index]=arr2[j];
        arr2[j]=temp;
    
    for(int ele: arr2){
        cout<<ele<<" ";
    }cout<<endl;
    


}

