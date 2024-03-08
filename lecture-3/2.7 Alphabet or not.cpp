// V important
// WAP to check  whether a character is an Alphabet or not.
#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter your alphabet: ";
    cin>>ch;
    int asci = (int)ch;

    if((asci>=65 && asci<=90) || (asci>=97 && asci<=122)){   // hierchy: && > ||  
                                                            //therefore brackets use kro!
                                                        
      cout<<"Your character is an alphabet";
    }
    else {
      cout<<"Invalid character";
    }


  }