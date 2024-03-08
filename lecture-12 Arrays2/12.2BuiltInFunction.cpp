//WAP to reverse the array without using any extra array
// USING built in fn
#include <iostream>
#include <vector>
#include <algorithm>  // reverse() walla fn accesseble hoga
using namespace std;

void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    

    vector<int>v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);

    display(v);
    cout<<endl;

    reverse(v.begin(),v.end()); // Only for vectors
    
    display(v);


}