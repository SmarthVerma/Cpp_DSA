#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    
    vector<int>res(m+n);
    
    int i=0;
    int j=0;
    int k=0;

    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        } else{ // arr1[i]<=arr2[j]
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
        // for remaining elements
        if(i==n){
            while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
        if(j==n){
            while(i<=n-1){
            res[k]=arr1[i];
            k++;
            i++;
        }
        
    }
    return res;
    
}   
    

void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<"  ";
    }
}

int main(){
    

    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    
    display(arr1);
    cout<<endl;

    vector<int>arr2;
    
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);

    display(arr2);
    cout<<endl;
    
    vector<int>arr3;
    
    arr3=merge(arr1,arr2);

    display(arr3);

}