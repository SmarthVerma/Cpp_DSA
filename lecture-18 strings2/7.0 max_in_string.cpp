#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    stringstream strinS(str);
    string temp;
    vector<string> v;

        while(strinS>>temp){
            v.push_back(temp);
        }

    int max=stoi(v[0]);
    int index;
    for(int i=0; i<v.size(); i++){
        if(max<stoi(v[i])){
        max=stoi(v[i]); 
        index=i;
        }
    }

    cout<<"Highest number: "<<max<<" At "<<index;


}
