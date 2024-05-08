#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;

    vector<int> arr(128,1000);
        for(int i=0; i<s.length(); i++){
            int asci= (int)s[i];
            if(arr[asci]==1000) arr[asci]=s[i]-t[i];
            else if(arr[asci]!=s[i]-t[i]){
                cout<<false;
            }

        }
        cout<<true;



}