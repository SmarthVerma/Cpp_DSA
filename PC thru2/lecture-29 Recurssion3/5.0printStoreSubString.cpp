#include <iostream>
#include <vector>
#include <string>
using namespace std;

    void printSub(string str, string original,int index){
        if(original[index]=='\0'){
                cout<<str<<endl;
        return;
        } 
            printSub(str, original, index+1); 
            printSub(str + original[index], original, index+1); 
        }

    void storeSub(string str, string original,vector<string> &v, int index){
        if(original[index]=='\0'){
                v.push_back(str);
                return;
        } 
            storeSub(str, original, v, index+1); 
            storeSub(str + original[index], original,v, index+1); 
        }

int main(){
    // printSub("","abc",0);
    vector<string> s;
    storeSub("","abc",s,0);

    for(string ele: s){
        cout<<ele<<endl;
    }

}