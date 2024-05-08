#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;


        while(ss>>temp){
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        
        int n=v.size();
        int count=1;
        int mx=1;
        
        for(int i=1; i<n; i++){         //finding max occuring word
            if(v[i]==v[i-1]) count++;
            else count =1;
            mx= max(count,mx);          
        }

        count=1;
        
        for(int i=1; i<n; i++){
            if(v[i]==v[i-1]) count++;
            else count =1;
            if(count==mx)               // if count == max which means we found our most occuring word
            cout<<v[i]<<" "<<mx<<endl;
        }

}