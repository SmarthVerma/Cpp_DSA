#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    bool flag=false; // not palindrone
        for(int i=0; i<=n-1; i++){
            cin>>arr[i];
        }
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]==arr[j]){
                flag=true;
                
            } else {
                cout<<"Not palindrome";
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag==true){
            cout<<"Given array is palindrone";
        }
}