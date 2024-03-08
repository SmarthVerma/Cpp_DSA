#include <stdio.h>
#include <limits.h> // INT_MIN or INT_MAX  k liye

int main(){
    int n;
    printf("Size of the array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }  
    int max=arr[0]; // Assume kia
    int index=-1;   // so we know which index is first max
    for(int j=0; j<=n-1; j++){
        if(max<arr[j]){
            max=arr[j];
            index=j;
        }
    }
    int max2=INT_MIN;
    for(int j=0; j<=n-1; j++){
        if(max2<arr[j] && index!=j){ // index!=j so max aur max2 same na aajay
            max2=arr[j];
        }
    }   
        printf("%d\n%d",max,max2);


    return 0;
}