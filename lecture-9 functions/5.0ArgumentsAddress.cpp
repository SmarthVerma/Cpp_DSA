#include <iostream>
using namespace std;

void fun(int x, int y){
    cout<<"Memory address of fun x: "<<&x<<endl;
    cout<<"Memory address of fun y: "<<&y<<endl;

}

int main(){
    int x=4;
    int y=5;

    cout<<"Memory address of main x: "<<&x<<endl;
    cout<<"Memory address of main y: "<<&y<<endl;

    fun(x,y);

}