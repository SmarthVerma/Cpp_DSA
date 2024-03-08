//WAP to reverse the array without using any extra array
// USING WHILE LOOP
#include <iostream>
#include <vector>
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
    // Reverse
    for(int i=0,j=v.size()-1 ; i<=j ; i++, j--){
            // swap v[i] amd v[j]
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
    }
    display(v);

}