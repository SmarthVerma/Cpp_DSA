#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    getline(cin,name); // get a whole line

    int m= name.length();    // same as size
    int n= name.size();

    name.push_back('w');    // like vectors but cant "wef"

    str.pop_back(); // remove last character

    name= "Mr "+name;   // can use plus operator and also in variables name= name + last;

    reverse(name.begin()+1,name.end()-1);
    reverse(name.begin()+1,name.begin()+4);


    cout<<name.substr(4)<<endl; // start from 4 indice to last indice
    cout<<name.substr(2,3)<<endl; // start from 2 indice and go futher 3 indices including itself

    // IMPORTANT

    int x=653468;
    
    string s= to_string(x);
    cout<<s;

    return 0;
}
