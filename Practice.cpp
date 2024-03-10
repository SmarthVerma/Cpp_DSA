#include <iostream>

using namespace std;

int check(int n, int m){
    if(n==1 && m==1) return 1;
    if(n==0 || m==0) return 0;
    int ans=check(n-1,m);
    int ans2=check(n,m-1);
    return ans2+ans;
}
int check2(int n){
    int ans=check2(n-1);
    if(n>0) return 1;
    return ans;
    
}

int main(){

cout<<check(3,3)<<endl;
cout<<check2(4)<<endl;


}