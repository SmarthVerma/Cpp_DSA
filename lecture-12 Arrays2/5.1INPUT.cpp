#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;

    cout<<"Enter your numbers: ";
        for(int i=0; i<=4; i++){        
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<v.size()-1; i++){
            cout<<v[i]<<" ";
        }

}