#include <iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        int nst=1;
        int nsp=n-1;
        
            for(int i=1; i<=2*n-1; i++){
               
                for(int i=1; i<=nsp; i++){
                    cout<<" ";
                }
                for(int j=1; j<=nst; j++){
                    cout<<"*";
                }
                cout<<endl;
                 if(i<n){
                    nsp--;
                    nst++;
                } else{
                    nsp++;
                    nst--;
                }
            }


        
        return 0;
    }