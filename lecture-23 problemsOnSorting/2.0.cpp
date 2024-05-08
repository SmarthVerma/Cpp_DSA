/*
Given an array with N distinct elements,
convert the given array to a form where all
elements are in the range from 0 to N-1. The order
of elements is the same, i.e., 0 is placed in the
place of the smallest element, 1 is placed for the
second smallest element, ... N-1 is placed for the
largest element.

eg: 19 12 23 8 16
    3  1  4  0 2
*/
#include <iostream>
#include <vector>
#include <algorithm>

    using namespace std;
    int main(){
            int arr[]={7,9,2,4,3,8,6};
            int n= sizeof(arr)/sizeof(arr[0]);
            int count=0;
            
        for(int i=0; i<n-1; i++){
            int min=INT_MAX;
            int index=-1;
            for(int j=0; j<n; j++){
                if(arr[j]<min){
                    min=arr[j];
                    index=j;
                }
                
            }
            arr[index]=count;
                count++;
         }
         
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
         }
    }
