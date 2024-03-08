#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string stringy;
    cout<<"Enter even length string: ";
    getline(cin,stringy);
        
        while(stringy.size()%2!=0){
            cout<<"Enter even length string: ";
            getline(cin,stringy);
        }
    int n=stringy.size();
    reverse(stringy.begin()+(n/2),stringy.end());

    cout<<stringy;






}