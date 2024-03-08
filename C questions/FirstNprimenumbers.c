#include<stdio.h>
#include <stdbool.h>

int prime(int num){
    if(num==1){
        return false;
    }
    for(int i=2; i<=num-1; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main (){
    int n;
    printf("Enter number n prime numbers: ");
    scanf("%d",&n);
    int num=1;
    int count=0; 
        while(count<n){
            if(prime(num)){
                printf("%d ",num);
                count++;
                }
            num++;
            
        }
}
  

  