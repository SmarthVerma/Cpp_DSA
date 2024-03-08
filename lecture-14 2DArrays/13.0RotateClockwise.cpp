// leetcode 48
#include <iostream>
using namespace std;
int main(){
    // transpose ---> reverse
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
        cout<<endl;
        // transform into transpose
         for(int i=0; i<m; i++){                 
            for(int j=i+1; j<m; j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
            cout<<endl;
        }

        
            cout<<"Transpose"<<endl;
           for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"rotating by 90 degree"<<endl;
        // reverse krna ha line by line
        for(int k=0;k<m; k++){
            int i=0;
            int j=m-1;
            while(i<=j){
                int temp=arr[k][j];
                arr[k][j]=arr[k][i];
                arr[k][i]=temp;
                i++;
                j--;
            }            
        }

        // print;

          for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
}