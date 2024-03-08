#include <iostream>
using namespace std;

int main(){
    int x=6;
    int* p=&x;
    /* OR
    int x=6;
    int *p=&x;
    */

   float y=7;
   int* p= &y; // error same data type  

    cout<<&x<<endl<<p;
}