#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;

    cout<<*ptr1**ptr2;

}