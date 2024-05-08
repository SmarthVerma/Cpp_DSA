#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    string str2=str;
    reverse(str2.begin(),str2.end());
        if(str==str2){
            cout<<"Palendrone";
        }
        else cout<<"Not palendrone";
}