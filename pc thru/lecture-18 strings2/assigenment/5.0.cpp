// Given a sentence ‘str’, return the word that is lexicographically maximum.
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

     int n=s.size();
    sort(s.begin(),s.end());
    
    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }
    cout<<"Maximum lexicographically: "<<s[n-1]<<endl;
   

   



}
