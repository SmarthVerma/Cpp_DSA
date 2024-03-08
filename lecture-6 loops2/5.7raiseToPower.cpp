#include<iostream>
using namespace std;

int main(){
    int a,b;
    float power =1;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    bool flag = true; // means b is positive
   if(b<0){
    flag = false;
    b=-b;
   }
   for(int i=1;i<=b;i++){

    power=power*a;
   
   }
   if(flag == false){
    power=1/power;
   }
   if(a==0 && b==0) cout<<"Not defined";
   else cout<<power;

}



