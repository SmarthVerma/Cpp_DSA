#include <iostream>
#include <string>
#include <vector>
using namespace std;


void print(){
    static int b=10;
    cout<<b<<endl;
    b++;
}

int main(){
    print();
    print();
    print();
    print();
        

}