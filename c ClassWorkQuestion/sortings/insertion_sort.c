#include <stdio.h>




int main(){
    int arr[]= {1,13,13,15,1,43,2,541};
    int n= sizeof(arr)/sizeof(arr[0]);

    

    for(int i=1; i<n; i++){
        int j=i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }  
}