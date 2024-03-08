// sorting without using sort(v.begin(),v.end())

#include <iostream>
#include <vector>
using namespace std;

void sort10(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0; i<=v.size()-1; i++){
        if(v[i]==0) noz++;
        else    noo++;
    }
     for(int i=0; i<=v.size()-1; i++){
        if(i<noz)
        v[i]=0;
        else
        v[i]=1;
    }
    


}


void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}


int main(){

vector<int>v;
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
   
    display(v);

    cout<<endl;

    sort10(v);

    display(v);


}