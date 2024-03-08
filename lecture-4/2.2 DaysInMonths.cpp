#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter your month number";
    int x;
    cin>>x;
    cout<<"\n\n";

        switch(x){
            case 1:
            cout<<"Number of days in Jan: 31 ";
                break;
            case 2:
            cout<<"Number of days in Feb: 28 ";
                break;
            case 3:
            cout<<"Number of days in March: 31 ";
                break;
            case 4:
            cout<<"Number of days in April: 30 ";
                break;
            case 5:
            cout<<"Number of days in May: 31 ";
                break;
            case 6:
            cout<<"Number of days in June: 30 ";
                break;
            case 7:
            cout<<"Number of days in July: 31 ";
                break;
            case 8:
            cout<<"Number of days in August: 31 ";
                break;
            case 9:
            cout<<"Number of days in September: 30 ";
                break;
            case 10:
            cout<<"Number of days in October: 31 ";
                break;
            case 11:
            cout<<"Number of days in November: 30 ";
                break;
            case 12:
            cout<<"Number of days in December: 31 ";
                break;
            default:
            cout<<"Invalid month number";
                break;
        }


  }