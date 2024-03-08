#include <iostream>
using namespace std;


int main(){
    int arr[]={4,5,6,7,1};
    int* ptr= arr;
    cout<<ptr<<endl;
    for(int i=0; i<=4; i++){
            cout<<ptr[i]<<" ";      //arr[i] = ptr[i]
        }
    cout<<ptr[2]<<endl;
     ptr[0]=149; // *ptr=149; 
    
        for(int i=0; i<=4; i++){
            cout<<ptr[i]<<" ";
        }


}