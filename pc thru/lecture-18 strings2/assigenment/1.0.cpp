// Input a string and concatenate with its reverse string and print it.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string input;
    cin>>input;

    string rev;
    rev=input;

    reverse(rev.begin(),rev.end());

    input+=rev;

    cout<<input;


}