// leetcode 242
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int maxcount=1;
    char ch;
        for(int i=0; i<n-1; i++){
            int count=1;
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j]) count++;
            }
            if(count>maxcount){
                maxcount=count;
                
            }
        }
        cout<<"Most occouring char " <<maxcount<<" times"<<endl;
}