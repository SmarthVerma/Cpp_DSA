#include <stdio.h>

int main(){
    int n;
    printf("Size of the array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }  
    int max=arr[0];
    for(int j=0; j<=n-1; j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
        printf("%d",max);


    return 0;
}