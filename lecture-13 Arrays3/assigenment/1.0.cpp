#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,1,2,3,0,2,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    int x;
    cout<<"Enter target: ";
    cin>>x;
    int count=0;
    for(int i=0; i<=n-3; i++){
        for(int j=i+1; j<=n-2; j++){
            for(int k=j+1; k<=n-1; k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<i<<", "<<j<<", "<<k<<endl;
                    count++;
                }
            }
        }
    }
        cout<<endl;
        cout<<"Number of triplets: "<<count;

}