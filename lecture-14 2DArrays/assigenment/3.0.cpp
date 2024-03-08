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

    int minr,minc;
    int maxr,maxc;
    
    cout<<"Enter first coordinates: ";
    cin>>minr>>minc;
    cout<<"Enter second coordinates: ";
    cin>>maxr>>maxc;

    int sum=0;

    for(int i=minr; i<=maxr; i++){
        for(int j=minc; j<=maxc; j++){
            sum+= arr[i][j];
        }
    }

    cout<<sum;

}