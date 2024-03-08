#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter your x-y coordinates: ";
    cin>>x>>y;

    if (x==0 && y==0)
        cout<<"points lie on origin ";
    else if(x!=0 && y==0)
        cout<<"Points lie on x-axis ";
    else if(y!=0 && x==0)
        cout<<"Points lie on y-axis ";
    else cout<<"points lie on plane ";


        return 0;    
  }