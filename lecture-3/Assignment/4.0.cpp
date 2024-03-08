#include <iostream>
using namespace std;

int main(){
    float l;
    float b;
   
        cout<<"Enter your length:";
        cin>>l;
        
        cout<<"Enter your breadth:";
        cin>>b;
         float perimeter =2*(l+b);
         float area= l*b;


if(perimeter>area){
    cout<<"Perimeter is numerically larger than area "<<perimeter<<" "<<area;
} else if(area>perimeter)
    cout<<"Area is numerically larger than perimeter "<<perimeter<<" "<<area;
    else
    cout<<"Area and perimeter are numerically same";
    



    
  }