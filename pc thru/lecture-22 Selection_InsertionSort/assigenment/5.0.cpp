// Given an say of strings s[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted say.
#include<iostream>
#include <vector>
#include<string>

using namespace std;

int main(){
    vector<string> s={"physicswallah", "quiz", "practice", "pwskills","coding" };
        int n=s.size();
            for(int i=0; i<n-1; i++){
                for(int j=0; j<n-1-i; j++){
                    if(s[j]>s[j+1]){
                        swap(s[j],s[j+1]);
                    }
                }
            }

        for(int i=0; i<n; i++){
            cout<<s[i]<<endl;
        }
}