#include <iostream>

using namespace std;

int check(int n, int m){
    if(n==1 && m==1) return 1;
    if(n==0 || m==0) return 0;
    int ans=check(n-1,m);
    int ans2=check(n,m-1);
    return ans+ans2;
}

int main(){

cout<<check(3,2)<<endl;

}