#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    
    int n=s.size();

   
    vector<int> arr(26,0);
        for(int i=0; i<n; i++){
            char ch= s[i];
            arr[ch-97]++;
        }

        int mx=0;

        for(int i=0; i<26; i++){
            if(arr[i]>mx) mx=arr[i];
        }

        for(int i=0; i<26; i++){
            if(arr[i]==mx){
                cout<<(char)(97+i)<<" "<<mx;
            }
        }





}