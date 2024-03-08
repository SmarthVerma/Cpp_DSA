// sorting without using sort(v.begin(),v.end())

#include <iostream>
#include <vector>
using namespace std;

void sort10(vector<int>&v){
    
    int n=v.size();
     for(int i=0;i<n-1;i++){
       for (int j=i+1;j<n;j++){
           if (v[j]<v[i]){
                // swapping v[i] and [j]
               int temp=v[j];
               v[j]=v[i];
               v[i]=temp;
           }
       }
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