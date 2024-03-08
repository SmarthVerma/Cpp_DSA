#include <iostream>
using namespace std;
    void swap(int &x, int &y){
        x=x+y;
        y=x-y;
        x=x-y;
        cout<<x<<" "<<y;
        return;
    }

    int main(){
    
    int a,b;
    cin>>a>>b;
        swap(a,b); // or swap(p1,p2);

        return 0;
    }