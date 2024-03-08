#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Size of the array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }  

    printf("Enter a number you want to search: ");
    int x;
    scanf("%d",&x); // Number you want to search in Array
    bool check=false; // False= number not in array
     
     
     for(int i=0; i<=n-1; i++){
        if(x==arr[i]){
            check=true; // True=Number found in array
        }
    } 
    if(check==true){   
        printf("Your number is present in array:");
    } else printf("Number not found");

    return 0;
}