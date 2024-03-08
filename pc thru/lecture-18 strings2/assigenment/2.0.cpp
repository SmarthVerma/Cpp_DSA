//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string input;
    cin>>input;

    int x=stoi(input);
    int max=0;
    int lastdigit;
        while(x>0){
            lastdigit=x%10;
            if(lastdigit>max) max=lastdigit;
            x/=10;
        }
        x=stoi(input);
        cout<<"max is: "<<max<<endl;
        int sec_max=0;
        while(x>0){
            lastdigit=x%10;
            if(lastdigit>sec_max &&lastdigit!=max) sec_max=lastdigit;
            x/=10;
        }
        cout<<"second max is: "<<sec_max<<endl;
}