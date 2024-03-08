#include <iostream>
using namespace std;
int main(){
     int arr[3][3]= {1,2,3,2,6,8,9,12,15};

        for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }

}