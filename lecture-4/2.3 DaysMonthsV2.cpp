#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter your month number: ";
    int x;
    cin>>x;
    cout<<"\n\n";
        // 1 3 5 7 8 10 12
        // 4 6 9 11
        switch((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
            case 1:
            cout<<"31";
            }
        switch(x==4 || x==6 || x==9 || x==11){
            case 1:
            cout<<"30";
        }
        switch(x==2){
            case 1:
            cout<<"28";
        }

        
            


  }