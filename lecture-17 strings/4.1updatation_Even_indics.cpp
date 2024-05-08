#include <iostream>
#include <string>
using namespace std;

int main(){
    string name="Smarthverma";

    // updating even indices as 'a'

    for(int i=0; name[i]!='\0'; i++){
        if(i%2==0) name[i]='a';
    }

    cout<<name;
    

}