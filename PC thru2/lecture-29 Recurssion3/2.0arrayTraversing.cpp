#include <iostream>
#include <vector>
using namespace std;

    void display(int arr[], int n, int idx){
        if(n==idx) return;
        cout<<arr[idx]<<" ";
        display(arr,n,idx+1);
    }

    void display_vec(vector<int> &v,int idx){
        if(v.size()==idx) return;
        cout<<v[idx]<<" ";
        display_vec(v,idx+1);
    }

    int main(){
        int arr[]={4,67,8,97,1,3,2,16,4,76};
        int n= sizeof(arr)/sizeof(arr[0]); 

        vector<int> v(n);
        
        for(int i=0; i<n; i++){
            v[i]=arr[i];
        }

        display(arr,n,0);
        cout<<endl;
        display_vec(v,0);


    }