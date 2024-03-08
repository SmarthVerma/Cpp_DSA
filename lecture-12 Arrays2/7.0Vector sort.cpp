#include <iostream>
#include <vector>
#include <algorithm> // sort chlti h
using namespace std;

int main(){
    vector<int> vec{65,85,46,654,64};
    for(int i=0; i<=vec.size()-1; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0; i<=vec.size()-1; i++){
        cout<<vec.at(i)<<" ";
    }

}