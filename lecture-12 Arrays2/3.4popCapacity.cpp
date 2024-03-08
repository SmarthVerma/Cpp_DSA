#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v; 

    v.push_back(1); // 1 1
    v.push_back(4); // 2 2
    v.push_back(9); // 3 4
    v.push_back(5); // 4 4
    v.push_back(1); // 5 8
    v.push_back(4); // 6 8
    v.push_back(9); // 7 8
    v.push_back(5); // 8 8
    v.push_back(1); // 9 16
    v.push_back(4); // 10 16
    v.push_back(9); // 11 16
    v.push_back(5); // 12 16
    v.push_back(1); // 13 16
    v.push_back(4); // 14 16


    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;


}