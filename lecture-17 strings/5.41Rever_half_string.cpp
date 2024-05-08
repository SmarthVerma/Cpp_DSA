// input even length string and reverse first half of the string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string name;
    cout<<"Enter word(even length): ";
    getline(cin,name);
        while(name.size()%2!=0){
            cout<<"Enter even length word: ";
            getline(cin,name);
        }
        int n=name.size();
            // reversing 
    reverse(name.begin(),name.begin()+(n/2));

    cout<<name;
}