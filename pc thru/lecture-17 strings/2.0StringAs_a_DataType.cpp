#include <iostream>
#include <string>
using namespace std;

int main(){
    // string str= "Smarth verma";  // 
    // cout<<str;

    string s;
    // cin>>s; // only if the given string has no spaces
                 // strings me spaces aa skte ha, problem is only
                                         // when taking input    

                    // getline FUNTION

    getline(cin,s); // Very important
    cout<<s;

}