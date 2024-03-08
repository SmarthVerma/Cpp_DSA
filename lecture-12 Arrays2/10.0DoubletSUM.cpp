// Leatcode question
#include <iostream>
#include <vector>
using namespace std;

int main (){
int x;
cout<<"Enter Target: ";
cin>>x;
vector<int> v;
cout<<"Enter the size of array: ";
int n;
cin>>n;


    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<=v.size()-2; i++){
        for(int j=i+1; j<=v.size()-1; j++){     // if j=0 and i<=v.size()-1  
                                                //fir repetion walle b aaynge
            if(v.at(i)+v.at(j)==x){
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
        }
        
    }



}
