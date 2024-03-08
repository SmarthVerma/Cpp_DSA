#include <iostream>
using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3, slope1, slope2;
        cout<<"Enter points (x1,y1)" <<endl;
        cin>>x1>>y1;
        cout<<"Enter points (x2,y2)" <<endl;
        cin>>x2>>y2;
        cout<<"Enter points (x3,y3)" <<endl;
        cin>>x3>>y3;

        slope1= (y2-y1) / (x2-x1);
        slope2= (y3-y2) / (x3-x2);

            if(slope1 == slope2)
            cout<<"All points lie on the same line";
            else cout<<"All points does not lie on the same line";

            return 0;

    
  }