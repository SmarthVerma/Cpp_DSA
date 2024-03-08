#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Your numbers: ";
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
        bool check=false;
        for(int i=0; i<=n-1; i++){
            for(int j=i+1; j<=n-1; j++){
                if(arr[i]==arr[j]){
                    check=true;
                    break;
                }
            }
        }
        if(check==true){
            cout<<"Dublicate found";
        } else cout<<"Not found";

}