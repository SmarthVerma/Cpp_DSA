#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<algorithm>

using namespace std;

int main(){
string sentence;
getline(cin,sentence);


stringstream strS(sentence);
vector<string> v;
string temp;
        
        while(strS>>temp){      
            v.push_back(temp);
        }

        // sort(v.begin(),v.end());

        int count=1;
        int mx=1;
        int n=v.size();

       

        for(int i=0; i<n-1; i++){     // finding max occuring word
            count =1;
            for(int j=i+1; j<n; j++){
                if(v[i]==v[j]) count++;
            }
            if(count>mx) mx=count;
        }

        
        for(int i=0; i<n-1; i++){
            count =1;
            for(int j=i+1; j<n; j++){
                if(v[i]==v[j]) count++; 
            }
            if(mx==count) cout<<v[i]<<" "<<mx<<endl;    // if count == max which means we found our most occuring word
        }

}