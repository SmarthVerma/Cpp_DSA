#include <iostream>
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

    cout<<endl<<"Input: "<<endl;

     for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Transpose: "<<endl;


        // STORING IN NEW MARTICES

    int trans[n][m];

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            trans[i][j]=arr[j][i];
        }
       
    }
        cout<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<trans[i][j]<<"    ";
        }
        cout<<endl;
    }

   
}