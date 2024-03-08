#include <iostream>
using namespace std;
int main(){
    int arr[2][3];

    cout<<"Enter Roll numbers: ";
        for(int i=0; i<3; i++){
            cin>>arr[0][i];
        }
    cout<<"Enter marks: ";
        for(int j=0; j<3; j++){
            cin>>arr[1][j];
        }
    for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
}