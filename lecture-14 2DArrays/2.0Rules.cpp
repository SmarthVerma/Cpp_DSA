#include <iostream>
using namespace std;

int main(){
            // VALID
    int arr[][3]= {1,2,3,2,6,8,9,12,15}; // columns dena zaruri
            // NOT VALID
    int arr[3][]= {1,2,3,2,6,8,9,12,15};

     int [][3]; // NOT VALID
     int [3][]; // NOT VALID
              
}