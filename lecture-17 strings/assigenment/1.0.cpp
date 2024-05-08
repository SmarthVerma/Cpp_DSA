#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    getline(cin,name);

    int i=0;
    while(name[i]!='\0'){
        if(i%2!=0){
            name[i]='#';
        }
        i++;
    }
    cout<<name;

}