// substring?
// "abc" = a, ab, abc, b, bc ,c
// total 6 substrings of "abc"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str="abcdefgh";
    cout<<str<<endl;
    cout<<str.substr(4)<<endl; // start from 4 indice to last indice
    cout<<str.substr(2,3)<<endl; // start from 2 indice and go futher 3 indices including itself
    return 0;
}