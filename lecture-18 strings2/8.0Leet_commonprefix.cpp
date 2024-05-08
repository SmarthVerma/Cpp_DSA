#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<sstream>
using namespace std;

int main(){
    string words;
    getline(cin,words);

    stringstream strinS(words);
    string temp;
    vector<string> v;

        while(strinS>>temp){
            v.push_back(temp);
        }

    sort(v.begin(),v.end());
    int n=v.size();
        string common;
        int i=0;
        int j=n-1;
        string check1=v[i];
        string check2=v[j];
            while(check1[i]==check2[i]){
                common.push_back(check1[i]);
                i++;
            }
        cout<<"Common prefix: "<<common;


}