#include <iostream>
using namespace std;

int main(){
    float r;
    float pi = 3.1415;
   

        cout<<"Enter your radius: ";
        cin>>r;
         float circum = 2*pi*r;
         float area= pi*r*r;

if(circum>area){
    cout<<"circumference is numerically larger than area "<<circum<<" "<<area;
} else if(area>circum)
    cout<<"Area is numerically larger than circumference "<<circum<<" "<<area;
    else cout<<"area and circumference are numerically same";



    
  }