//YEH KESE CHL RA HA BE??
#include <iostream>
using namespace std;

void fun(int x, int y=2){ // error ni aara wtf?
    cout<<x<<" "<<y;
}

int main(){
    fun(8, 0); 
}