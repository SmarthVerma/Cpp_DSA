#include <iostream>
#include <string>

using namespace std;

int main(){
    string name="aeiouaeiou";
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || 
            name[i]=='o'|| name[i]=='u' || name[i]=='A' || name[i]=='E' || 
            name[i]=='I'|| name[i]=='O'|| name[i]=='U'){
                count++;
            }
            i++;
    }
    cout<<"Number of vowels: "<<count;

    return 0;
}