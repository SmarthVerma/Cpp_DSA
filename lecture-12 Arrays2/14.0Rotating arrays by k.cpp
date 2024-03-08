
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
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);

    cout<<"Array: ";
    display(v);
    cout<<endl;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;                     
                            //k=2 (suppose)
                            // ARRAY: 1 6 2 3 7 9 8
    reverse_part(0,v.size()-1-k,v);    // reverse1: 7 3 2 6 1 9 8      
    reverse_part(v.size()-k, v.size()-1, v);    // reverse 2: 7 3 2 6 1 8 9
    reverse(v);                                // AllReverse: 9 8 1 6 2 3 7
    
    display(v);


}   