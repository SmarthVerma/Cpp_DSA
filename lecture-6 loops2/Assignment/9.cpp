#include <iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your limit: ";
        cin>>n;
        int last=0, sum=0;
        int m=n;
        
        for(int i=1; i<=m ; i++){
            n=i;
            for(int j=1; n>0; n/=10){
                last=n%10;
                sum= sum+ last*last*last;        
            }
            
            if(i==sum)
                cout<<"YOur number is armstrong: "<< i<<endl;
                sum=0; // important ha bhuul mt jaana
        }
            

      
        return 0;
    }