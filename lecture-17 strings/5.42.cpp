//Input a string of length greater than 5 and reverse the substring from position 2 to 5 
// using inbuilt funtions
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string name="Smarthy";
    reverse(name.begin()+1,name.begin()+5);
    cout<<name;

}