#include <iostream>
using namespace std;

void fun(){
    cout<<a; //error
}

int main(){
    int a=4; // local varible( fn tak simat)
    
    fun();

}