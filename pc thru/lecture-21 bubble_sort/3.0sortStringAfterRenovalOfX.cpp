// Sort a String in decreasing order of values associated after removal of values smaller than X.
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    char target='X';
   
    
    string after_;
        for(int i=0; i<s.size(); i++){
            if(target<=s[i]){
                after_.push_back(s[i]);
            }
        }
        // sorting thru bubble
        int n=after_.size();
        for(int i=0; i<n-1; i++){
            bool flag=true;
            for(int j=0; j<n-1-i; j++){
                if(after_[j]<after_[j+1]){
                    swap(after_[j],after_[j+1]);
                    flag=false;
                }
            }
            if(flag==true) break;
        }

        for(int i=0;i<n;i++){
            cout<<after_[i];
        }

}