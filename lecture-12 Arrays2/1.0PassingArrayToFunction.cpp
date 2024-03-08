// passing arry to fn me refernce jati ha
#include <iostream>
using namespace std;

int display(int arr[], int size){ // int* arr; bhi chlega
    for(int i=0; i<=size-1; i++){
        cout<<arr[i]<<" ";
    }
}

void change (int b[]){  // int* b;
    b[1]=12;
}

int main(){
    int arr[5]={2,6,78,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size); // or &arr[0]
    change(arr);
    cout<<endl;
    display(arr,size);

}