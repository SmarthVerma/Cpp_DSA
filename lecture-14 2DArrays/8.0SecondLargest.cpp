#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter number of rows: ";
    int m;
    cin>>m;
    cout<<"Enter number of columns: ";
    int n;
    cin>>n;

    int arr[m][n];

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    int max=INT_MIN;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(max<arr[i][j]){
                    max=arr[i][j];
                }
            }
        }
        int max2=INT_MIN;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(max2<arr[i][j] && max!=arr[i][j]){
                    max2=arr[i][j];
                }
            }
        }
        cout<<"2nd Max element: "<<max2;
}