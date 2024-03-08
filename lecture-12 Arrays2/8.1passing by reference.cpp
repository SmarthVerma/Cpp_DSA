// Different than arrays
// values are passed instead of reference
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void change(vector<int>&v){ // & ka khel ha bero
    v.at(4)=6969;
    cout<<endl;
}
int main(){
    vector<int> vec{65,85,46,654,64};
    for(int i=0; i<=vec.size()-1; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    
    change(vec);

    for(int i=0; i<=vec.size()-1; i++){
        cout<<vec.at(i)<<" ";
    }

}