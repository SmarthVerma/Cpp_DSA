#include <iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        
            for(int i=1; i<=n+1; i++){
                for(int j=1; j<=i; j++){
                    if(i%2!=0) cout<<j;
                    else cout<<(char)(64+j);
                }
                cout<<endl;
            }


        
        return 0;
    }