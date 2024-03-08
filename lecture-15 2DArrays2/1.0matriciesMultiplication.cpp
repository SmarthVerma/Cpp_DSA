#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows of 1 matrix: ";
    cin>>m;
    int n;
    cout<<"Enter number of column of 1 matrix: ";
    cin>>n;
    int p;
    cout<<"Enter number of rows of 2 matrix: ";
    cin>>p;
    int q;
    cout<<"Enter number of colum of 2 matrix: ";
    cin>>q;

    if(n!=p){
        cout<<"Multiplication not possible";
        return 0;
    }

    int arr1[m][n];

    cout<<endl<<"Enter elements for 1 matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[p][q];

    cout<<endl<<"Enter elements for 2 matrix: "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>arr2[i][j];
        }
    }
        // resultant martix
    int res[m][q];

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j]=0;
            for(int k=0; k<p; k++){
                
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<endl<<endl;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }
} 