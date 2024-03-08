// 4 and 8 are default values of x and y
#include <iostream>
using namespace std;

void fun(int x=4, int y=8){ 
    cout<<x<<" "<<y;
}

int main(){
    fun();
}