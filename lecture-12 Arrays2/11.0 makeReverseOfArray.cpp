//WAP to copy contents of one array into another in reverse order
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of array: ";
    int i;
        for(i=0; i<n; i++){
            int q;
            cin>>q;
            v.push_back(q);
        }

        int a=0;
    vector<int>r(v.size());
    for(int j=r.size()-1 ; j>=0; j--){
        r[a]=v[j];
        a++;
    }
    cout<<endl;
        for(int k=0; k<r.size(); k++){
        cout<<r[k]<<" ";
        }



}
