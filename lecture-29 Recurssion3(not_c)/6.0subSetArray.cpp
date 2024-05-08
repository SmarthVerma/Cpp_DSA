#include <iostream>
#include <vector>
using namespace std;

    void printSub(int arr[], int n, int index, vector<int> ans){
        if(index==n){
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            return;
        } 
            printSub(arr, n, index+1,ans); 
            ans.push_back(arr[index]);
            printSub(arr, n, index+1,ans); 
        }

int main(){

    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSub(arr,n,0,v);

}
