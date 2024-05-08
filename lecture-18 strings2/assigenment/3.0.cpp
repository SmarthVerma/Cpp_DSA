// Input a string and return the number of substrings that contain only vowels.
        // WRONG!!
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||
        c=='I' || c=='O' || c=='U') return true;
    else return false;
}

int CountVowelString(string s){
    int n=s.size();
    int count=0;
        for(int i=0; i<n; i++){
            if(isVowel(s[i]))
            count+=n-i;
        }
        return count;
}



int main(){
    string input;
    cin>>input;
    
    int result=CountVowelString(input);
    cout<<"Number of substring of vowels: "<<result;



}