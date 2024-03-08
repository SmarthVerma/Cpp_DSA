#include <iostream>
#include <string>

using namespace std;

int main(){
    string str="Heellooo";
    cout<<str<<endl;

    str.push_back('w');
    str.push_back('o');
    str.push_back('r');
    str.push_back('l');
    str.push_back('D');

    cout<<str;
    //str.push_back("yel");   //error

}