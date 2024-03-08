#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    
    int n=str.size();

        if(n==1){
            cout<<"0";
            return 0;
        }
        else if(n==2){
            if(str[0]==str[1])
            cout<<"0";
            else cout<<"1";
            return 0;
        }
        int count =0;
        
        for(int i=0; i<n; i++){
            if(str[i] == str[i+1] ||str[i] == str[i-1]) continue;
            if(str[i-1] != str[i+1]) count++;
        }
        cout<<"Number of neighbouring chars different from each other: "<<count;


}