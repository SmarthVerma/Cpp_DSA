//Return the total number of digits in a number without using any loop.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int x=653468;
    
    string s= to_string(x);
    cout<<"Number of digits: "<<s.length();

}