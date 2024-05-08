#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    getline(cin,word);

    int i=0;
    int count=0;
    while(word[i]!='\0'){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            i++;
            continue;
        }
        count++;
        i++;
    }
    cout<<"Number of consonents: "<<count;

}   