#include <iostream>
using namespace std;

int main(){
int m;
cout<<"Enter number of rows: ";
cin>>m;
int n;
cout<<"Enter number of columns: ";
cin>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        } 
    }
    cout<<endl;

    


int minr= 0;
int maxr= m-1;
int minc= 0;
int maxc= n-1;

    while( minr<=maxr && minc<=maxc){
        //RIGHT
        for(int i=minc; i<=maxc; i++ ){
            cout<<arr[minr][i]<<"    ";            
        }
        minr++;
        //DOWN
        for(int i=minr; i<=maxc; i++){
            cout<<arr[i][maxc]<<"    ";
        }
        //LEFT  
        maxc--;
        for(int i=maxc; i>=minc; i--){
            cout<<arr[maxr][i]<<"    ";
        }
        //UP
        maxr--;
           for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<"    ";
        }
        minc++;
            
    }



}