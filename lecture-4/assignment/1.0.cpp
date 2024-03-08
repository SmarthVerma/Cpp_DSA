#include <iostream>
using namespace std;

int main(){
    int ammount;
    cout<<"enter amount: ";
    cin>>ammount;
    int n500,n100,n50,n20,n10,n5,n2,n1;
    n500=n100=n50=n20=n10=n5=n2=n1=0;

    switch(ammount>=500){
        case 1:
        n500=ammount/500;
        ammount -=n500 * 500;
        break;}
    switch(ammount>=100){
        case 1:
        n100= ammount/100;
        ammount -= n100 * 100;
        break;}
    switch(ammount>=50){
        case 1:
        n50= ammount/50;
        ammount -= n50 * 50;
        break;}
    switch(ammount>=20){
        case 1:
        n20= ammount/20;
        ammount -= n20 * 20;
        break;}
    switch(ammount>=10){
        case 1:
        n10= ammount/10;
        ammount -= n10 * 10;
        break;}
    switch(ammount>=5){
        case 1:
        n5= ammount/5;
        ammount -= n5 * 5;
        break;}
    switch(ammount>=2){
        case 1:
        n2= ammount/2;
        ammount -= n2 *2;
        break;}
    switch(ammount>=100){
        case 1:
        n1= ammount/1;
        ammount -= n1 * 1;
        break;}

    cout<<"Rs500: "<< n500 <<endl;
    cout<<"Rs100: "<< n100 <<endl;
    cout<<"Rs50: "<< n50 <<endl;
    cout<<"Rs20: "<< n20 <<endl;
    cout<<"Rs10: "<< n10 <<endl;
    cout<<"Rs5: "<< n5 <<endl;
    cout<<"Rs2: "<< n2 <<endl;
    cout<<"Rs1: "<< n1 <<endl;
  }