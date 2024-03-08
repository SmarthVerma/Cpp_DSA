#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);

    vector<int> v2(v.size());
    for(int i=0; i<v2.size(); i++){
        v2[i]=v[v2.size() -1 -i];
    }
    display(v2);


}