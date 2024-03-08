#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter rows ";
    cin>>m;
    int n;
    cout<<"Enter columns ";
    cin>>n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int arr2[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr2[i][j];
        }
    }

      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j]= arr[i][j] + arr2[i][j];
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    

}