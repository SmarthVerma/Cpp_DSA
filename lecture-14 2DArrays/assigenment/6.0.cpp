#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rowws: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    int arr[m][n];
    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int x= m/2;
    int y= n/2;    

    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==x || j==y){
                cout<<arr[i][j];
            }else cout<<" ";
            
        }
        cout<<endl;
    }

}