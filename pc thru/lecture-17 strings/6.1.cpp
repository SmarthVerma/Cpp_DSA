//input a string of even length and return the second half of that string using inbuilt substr function
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string Word;
    cout<<"Enter even length: ";
    getline(cin,Word);

        while(Word.length()%2!=0){
            cout<<"Enter again, even length word: ";
            getline(cin,Word);
        }
        int n=Word.length();

        cout<<Word.substr(n/2);


}
