#include <iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter your number: ";
        cin>>n;
        
            for(int i=1; i<=n; i++){
                for(int l=i; l>=1; l--){
                    cout<<l;
                }
                cout<<endl;
            }


        
        return 0;
    }