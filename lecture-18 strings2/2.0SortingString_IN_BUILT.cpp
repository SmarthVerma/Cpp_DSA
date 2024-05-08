#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string s;
    // cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end()); // sorts acc to asci value
    cout<<s<<endl;
}