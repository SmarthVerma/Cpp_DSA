#include <iostream>
using namespace std;
int main(){

        int m=4;
        int n=2;
        int arr[m][n];

    cout<<"Enter Roll no.: ";
    
    for(int i=0; i<=m-1; i++){
        cin>>arr[i][0];
    }
    cout<<"Enter Marks: ";

     for(int i=0; i<=m-1; i++){
        cin>>arr[i][1];
    } 
       
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}