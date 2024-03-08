#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter your first number: ";
    float x;
    cin>>x;
    
    cout<<"Enter your operator: ";

    char ch;
    cin>>ch;
    int z= (int)ch;
    
    cout<<"Enter your second number: ";
    float y;
    cin>>y;
    

        switch(z==47){ // divide
            case 1:
            cout<< x/y;
        }
        switch(z==42){ // multiply
            case 1:
            cout<< x*y;
        }
        switch(z==43){ // addition
            case 1:
            cout<< x+y;
        }
        switch(z==45){ // substract
            case 1:
            cout<< x-y;
        }
            

  }