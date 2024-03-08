
#include<iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int nsp=n-1;
        int nst=1;
            for(int i=1; i<=2*n-1; i++){
                //Spaces
                for(int j=1; j<=nsp; j++){
                    cout<<" ";
                }
                if(i<=n-1) nsp--;
                else nsp++;
                //Stars
                for(int k=1; k<=nst; k++){
                    cout<<"*";
                }
                if(i<=n-1) nst+=2;
                else nst-=2;



                cout<<endl;
            }  
      

    }