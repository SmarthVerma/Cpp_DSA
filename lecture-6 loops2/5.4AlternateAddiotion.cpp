// WAP to count digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
   /* 
    int x=0;
    int y=0;

        for(int i=1;i<=n; i++){
            if(i%2==0){
                
                x-=i;
            }
            else{
                
                y+=i;
            }
        }
        int sum = x+y;
        cout<<sum;
        */

       //MATHS TRICK
       int y =0;
       int x= 0;
       if(n%2==0)
       x = -n/2;
       else{
       y = -n/2 +n;
       }
       int sum = x+y;
       cout<<sum;


}