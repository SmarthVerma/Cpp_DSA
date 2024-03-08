// count number of words!
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);
    stringstream strS(sentence);
    
    string temp;
    int count=0;
    while(strS>>temp){
        count++;
    }

    cout<<"Number of words: "<<count;

}