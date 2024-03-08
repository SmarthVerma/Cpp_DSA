#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>a){
     for(int i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}

int sortin(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
        while(i<j){
            if(v[i]<0) i++;
            if(v[j]>0) j--;
            if(i>j) break;
            if(v[i]>0 && v[j]<0){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                i++;
                j--;
            } 
        }
}


int main(){
    vector<int>v;
    
    v.push_back(-3);
    v.push_back(7);
    v.push_back(-9);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(-1);

    display(v);

    sortin(v);

    display(v);

}