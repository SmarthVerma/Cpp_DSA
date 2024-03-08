// Given an array of strings. Check whether they are anagram or not.
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);
    stringstream strS(sentence);
    string temp;
    
    vector<string> s;
        while(strS>>temp){
            s.push_back(temp);
        }

     while(s.size()!=2){
        cout<<"ENter two words: ";
        s.clear();
        // strS.clear();
        
        getline(cin,sentence);
        stringstream strS(sentence);
        while(strS>>temp){
            s.push_back(temp);
        }
        
        
     }
 
     int n=s.size()-1;
    sort(s[0].begin(),s[0].end());
    sort(s[n].begin(),s[n].end());

    cout<<s[0]<<endl;
    cout<<s[n]<<endl;

    if(s[0]==s[n]){
        cout<<"Are anagram";
    }else cout<<"Not anagram";



}
