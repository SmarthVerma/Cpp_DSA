
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void change(vector<int>&v){ // & ka khel ha bero
    v.at(4)=6969;
    cout<<endl;
}
int main(){
 
vector<int> v{12,6,2,3,2,1,6,12};
int x;
cout<<"Enter the value of x: ";
cin>>x;
int index=-1;

    for(int i =0; i<=v.size()-1; i++){
        if(v.at(i)==x){
        index = i;
        }
    
   
    }   
cout<<index;
}   
