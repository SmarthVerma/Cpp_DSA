#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v(5);

    cout<<"Enter your numbers: ";
        for(int i=0; i<=4; i++){
            cin>>v[i];
        }
        for(int i=0; i<=4; i++){
            cout<<v[i]<<" ";
        }

}