#include <iostream>
using namespace std;
    void swap(int* x, int* y){
        *x=*y+*x;
        *y=*x-*y;
        *x=*x-*y;
        cout<<*x<<" "<<*y;
        return;
    }

    int main(){
    
    int a,b;
    cin>>a>>b;
    int* p1=&a;
    int* p2=&b;
        swap(&a,&b); // or swap(p1,p2);

        return 0;
    }