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

        

        //transform in transpose

        for(int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
       
        // For rotating 90 degree = reverse elemnts row wise

        for(int k=0; k<m; k++){
            int i=0;
            int j=m-1;
            while(i<=j){
                int temp=arr[k][i];
                arr[k][i]=arr[k][j];
                arr[k][j]=temp;
                i++;
                j--;
            }
        }

         cout<<endl;
      
        // Now print matrix in wave form
        for(int i=0; i<=m-1; i++){
            
                if(i%2!=0){
                    for(int j=0; j<m; j++){
                        cout<<arr[i][j]<<"  ";
                    }
                }
                    else{
                        for(int j=m-1; j>=0; j--){
                            cout<<arr[i][j]<<"  ";
                        }
                    }
            
        }
    }
    

