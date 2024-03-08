#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int n;

    cout<<"length of string you want to input: ";
    cin>>n;

        for(int i=0; i<n; i++){
            char ch;
            cin>>ch;
            s.push_back(ch);
        }
        int i=0;
    while(s[i]!='\0'){
        if(i%2!=0){
            s[i]='#';
        }
        i++;
    }

    cout<<s;
}