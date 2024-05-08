#include <iostream>
#include <string>

using namespace std;

int main(){
    string convert_int;

    cout<<"Enter number you want to convert into int: ";
    cin>>convert_int;
    

    while(convert_int.size()>10){
            cout<<"Enter less than 10, string: ";
            cin>>convert_int;
        }

    int i=0;
    int num=0;
    while(convert_int[i]!='\0'){
        num*=10;
        num+=(int)convert_int[i] - 48;
        // num+=num;
        i++;
    }
    cout<<num;
}