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
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);

    display(v);
    cout<<endl;
    // Reverse
    int i=0;
    int j=v.size()-1;
        while(i<=j){
            // swap v[i] amd v[j]
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    display(v);

}