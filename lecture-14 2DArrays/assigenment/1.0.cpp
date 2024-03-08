#include <iostream>
using namespace std;

int main(){
    int brr[5][5];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            brr[i][j]=10;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
    }


}