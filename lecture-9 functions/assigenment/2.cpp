#include <iostream>
using namespace std;
float pi=3.1415;

float area(int r){
    float area = pi*r*r;

    return area;
}
int main(){
    int r;
    cout<<"Enter radius if circle: ";
    cin>>r;
    cout<<"Area of traingle: "<<area(r);
}