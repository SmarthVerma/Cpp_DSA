// V important
// WAP to check  whether a character is an Alphabet or not.
#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter your alphabet: ";
    cin>>ch;
    int asci = (int)ch;

    if(asci>=65 && asci<=90){

      cout<<"Your character is Upercase alphabet";
    }
    else if(asci>=97 && asci<=122){
      cout<<"Your character is lowercase alphabet";

    }
    else {
      cout<<"Invalid character";
    }


  }