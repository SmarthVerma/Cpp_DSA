//WAP to check whether a given character is a vowel or a consonent
#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter your alphabet: ";
    cin>>ch;
    int asci = (int)ch;

    if((asci>=65 && asci<=90) || (asci>=97 && asci<=122)){   
       if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')                                                 
      cout<<"Your alphabet is Vowel";
       else{
        cout<<"Your alphabet is consonent";
    }
    }
    else {
      cout<<"Invalid character";
    }




  }