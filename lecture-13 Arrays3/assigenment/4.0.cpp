#include <iostream>
using namespace std;

int main(){
    int big[]={1,3,5,7,9,11,13,15,9,7,5,2};
    int arr[]={1,3,7,3,11,7};

    int n=sizeof(big)/sizeof(big[0]); // total elements in big

    int m=sizeof(arr)/sizeof(arr[0]); // total elements in arr


        bool flag=false;// No matching element

        for(int i=0; i<m; i++){     // loop of arr
                 flag=false;
            for(int j=0; j<n; j++){     // loop of big
                if(arr[i]==big[j]){ 
                    
                    flag= true;
                    continue;}
            }
            if(flag==false){
                cout<<"Arr is NOT a subset of big";
                return 0;
            }
        }

        if(flag==true){
            cout<<"Arr is a subset of big";
        }
        else cout<<"Arr is NOT a subset of big";


}