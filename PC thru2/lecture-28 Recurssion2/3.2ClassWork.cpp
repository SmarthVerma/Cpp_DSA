// can take 1step 2step and 3steps
#include <iostream>

using namespace std;

int noOfWays(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4; // 
    int ans=noOfWays(n-1)+noOfWays(n-2)+noOfWays(n-3);
    return ans;

}

int main(){
    cout<<"Enter the number of stairs: ";
    int n;
    cin>>n;
    cout<<noOfWays(n);

}