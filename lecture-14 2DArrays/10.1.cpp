#include <iostream>
using namespace std;
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={7,9,5,6,1,3};
    

        

        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                cout<<a[i][j]+b[i][j]<<"  ";
            }
            cout<<endl;
        }

        
}