#include <stdio.h>

int main(){
   int n;
   int count=0;
   float average;
   int sum=0;
   
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
            if(count==0){
                printf("You didnt input number");
            }
        }
        count=count+1;
        sum+=n;
        average=(float)(sum)/count;
    }
    printf("Average is %.2f\n",average);
    printf("Numbers you input %d\n",count);
    printf("Sunm is %d", sum);

}