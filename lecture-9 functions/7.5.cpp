//  IMPORTANT= Arguemnt mei dono ko assign krni pdygi
#include <iostream>
using namespace std;

void fun(int x=2, int y){ // error
    cout<<x<<" "<<y;
}

int main(){
    fun(8, 0); 
}