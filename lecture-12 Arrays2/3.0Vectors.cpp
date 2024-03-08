#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v; // u need not to mention size
// dont use inserting/input using []   can give error
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(5);

// if you want to update / access  the you can use []
    v[0]=51;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
}