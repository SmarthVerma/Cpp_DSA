#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your elemnts: ";
            // INPUT
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
        cout<<"enter your number you want to search: ";
        int x;
        cin>>x;
            // CHECK MARK
        bool flag=true; 
            // SEARCH
        for(int i=0; i<=n-1; i++){
            if(x==arr[i]){
                cout<<"Present";
                break;
            } else flag=false;

        }
            if(flag == false) cout<<"Absent";
    return 0;
}