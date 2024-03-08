
#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}

void reverse_part(int i, int j, vector<int>&a){
    while(i<=j){
        //reverse
        int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
    }
}

void reverse(vector<int>&a){
    int i=0;
    int j=a.size()-1;
     while(i<=j){
        //reverse
        int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
    }
}

int main(){
    

    vector<int>v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);

    display(v);
    cout<<endl;

    reverse_part(1,4,v);
    // reverse(v);
    
    display(v);


}   