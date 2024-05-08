// print the given sentence in a lines word by word
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string str="Smarth is the    best and he is gonna make it";
    stringstream ss(str);   // helps getting word by word ignoring spaces
    string temp;
        
        while(ss>>temp){
            cout<<temp<<endl;
        }

}