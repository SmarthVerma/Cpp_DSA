/*if cost price and selling price of an item is input through the keyboard
    , write a program to determine whether the seller has made profit or
    incurred loss. Also determine how much profit or loss he incured*/

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your cost price: ";
    float cp;
    cin>>cp;
    cout<<"Enter your selling price: ";
    float sp;
    cin>>sp;

        if(sp>=cp){
            
            if(sp==cp){
                cout<<"neither profit nor loss";
            }
            else{
                cout<<"Profit is: "<< sp-cp;
            }
        }
        else{
            cout<<"loss is: "<<cp-sp;
        }



  }