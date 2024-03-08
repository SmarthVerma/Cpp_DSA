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

        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                if(i%2==0){
                    cout<<arr[i][j]<<"  ";
                    }
                    else{
                        for(int k=m-1; k>=0; k--){
                            cout<<arr[i][k]<<"  ";
                    }
                    break;
                }
            }
        }
    }
    

