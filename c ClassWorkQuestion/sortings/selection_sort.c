#include <stdio.h>
#include <limits.h>



int main(){
    int arr[]= {1,13,13,15,1,43,2,541};
    int n= sizeof(arr)/sizeof(arr[0]);

    

 for(int i=0; i<n-1; i++){
            int min=INT_MAX;
            int index=-1;
            for(int j=i; j<n; j++){
                if(arr[j]<min){
                    min=arr[j];
                    index=j;
                }
            }
            swap(arr[i],arr[index]);
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
        }
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }  
}