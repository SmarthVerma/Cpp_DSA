#include <iostream>
using namespace std;
int main(){
    cout<<"Enter rows/columns: ";
    int m;
    cin>>m;
    int arr[m][m];
        // INPUT
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }

        cout<<"your input: ";
        cout<<endl;

        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }

        // transforming in the same matrix
        for(int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){       // i+1 important
                int temp= arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
            cout<<endl;
        }
            // printing transpose
        cout<<"Transpose Transform: ";
        cout<<endl;

        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }

}