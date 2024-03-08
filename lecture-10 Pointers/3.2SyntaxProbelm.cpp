#include <iostream>
using namespace std;

int main(){
     
     int x,y;
     int* p1=&x, p2=&y; // Not correct

     int *p1=&x, *p2=&y;  // This is correct


}