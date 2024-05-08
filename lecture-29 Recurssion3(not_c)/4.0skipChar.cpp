#include <iostream>
#include <string>
using namespace std;

    string skipChar(string ans, string original, int idx){
        if(original[idx]=='\0') return ans;
        if(original[idx] =='a') return skipChar(ans,original,idx+1);
        else return skipChar(ans+original[idx],original,idx+1);
    }
    void skipChar2(string ans, string original, int idx){
        if(original[idx]=='\0'){
            cout<<ans;
            return;
        }
        if(original[idx] =='a')  skipChar2(ans,original,idx+1);
        else  skipChar2(ans+original[idx],original,idx+1);
    }

    

    int main(){
        string str= "SmarthVerma";

            skipChar2("",str,0);
            cout<<"\n"<<skipChar("",str,0);   

            
    }   