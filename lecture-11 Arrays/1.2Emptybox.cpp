#include <iostream>
using namespace std;

int main(){
            // WILL WORK
    int arr[]={1,5,3,45,7,36,69}; 
    arr[5]=78;
    cout<<arr[5];

            // BUT NOT THIS
    // int arr[];
    // arr[5]=6;
    //     cout<<arr[5];
    
    return 0;
}   