#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string name="Smarth";
    cout<<name<<endl;
    // reverse(name.begin()+1,name.end()-1);
    reverse(name.begin()+1,name.begin()+4);
    cout<<name;
}