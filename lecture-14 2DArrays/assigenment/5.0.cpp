#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rowws: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    int arr[m][n];
    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    int maxsum=INT_MIN;
    int index=-1;
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
        sum+=arr[i][j];    
        }
        if(sum>maxsum) {
            index=i;
            maxsum=sum;
        }
    }

    cout<<"Row number: "<<index;


}