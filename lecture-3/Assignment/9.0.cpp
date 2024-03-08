#include <iostream>
using namespace std;

int main(){
    
    //a-z -> 65 to 90 
    //A-Z -> 97 to 122
    //0-9 -> 48 to 57
        char ch;
        cout<<"Enter your character: ";
        
        cin>>ch;
        
        int x= (char)ch;
            if((x>=65 && x<=90) || (x>=97 && x<= 122))
            cout<<"Your input is an alphabet";
            else if(x>=48 && x<=57)
            cout<<"Your input is digit";
            else cout<<"Your input is special character";

    
  }