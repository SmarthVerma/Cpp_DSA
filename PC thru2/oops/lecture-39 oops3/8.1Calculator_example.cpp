// Creating functions with same name but different parameters
#include <iostream>
using namespace std;

  int calculateArea(int l, int b) {
    return l * b;
}

    int calculateArea(int s){
        return s*s;
    }
    float calculateArea(float a){
        return 3.14*a*a;
    }
 
    

    int main(){

         
         cout << calculateArea(5)<<endl;
         cout << calculateArea(5.1)<<endl;

    }