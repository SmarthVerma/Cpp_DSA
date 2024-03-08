#include <iostream>
#include <string>
using namespace std;

int main(){
    string name="Hello_Smarth";
    int n= name.size();         // 0 to name.size()  indices
    cout<<"Size of string: "<<n<<endl;

    int m= name.length();
    cout<<"Length of string: "<<m; // same as size

    return 0;
}