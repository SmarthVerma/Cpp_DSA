#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,1};
    int* ptr=arr; // giving address

        for(int i=0; i<=4; i++){
            cout<<*ptr<<" ";
            ptr++;
        } //VAlues are lost
        ptr=arr; // reassign

    return 0;
}