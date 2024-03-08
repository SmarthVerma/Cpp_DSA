#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec(5);
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;  // all elements are assigned to 0

    cout<<vec[2]<<endl;

    vector<int>v(5,7); // all elements are assigned to 7
    cout<<v[4];


    return 0;
}