#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"ENter rows/columns: ";
    cin>>m;

    // matix input
    int arr[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0; j<m; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<"  ";
        }
    }
}