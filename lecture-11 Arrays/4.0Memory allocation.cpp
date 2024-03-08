#include <iostream>
using namespace std;

int main(){
    int arr[6];

    cout<<arr<<endl; // print address only
    cout<<&arr<<endl;


    cout<<&arr[0]<<endl; // +4 add hore address me
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr[5]<<endl;
    cout<<&arr[6]<<endl;



    return 0;
}