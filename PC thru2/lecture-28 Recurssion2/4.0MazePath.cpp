#include <iostream>
using namespace std;

    int mazeWays(int sx,int sy,int ex,int ey){
        if(sx>ex || sy>ey) return 0;
        if(sx==ex && sy==ey) return 1;  // destination reached
        int rightways=mazeWays(sx+1,sy,ex,ey);
        int downways=mazeWays(sx,sy+1,ex,ey);
        int totalways= downways + rightways;
        return totalways;
        
    }

    void printpath(int sx,int sy,int ex,int ey, string s){
        if(sx>ex || sy>ey) return;
        if(sx==ex && sy==ey){
            cout<<s<<endl;
            return;
        }
        printpath(sx+1,sy,ex,ey,(s+'R'));
        printpath(sx,sy+1,ex,ey,(s+'D'));
    }

    int maze2(int x, int y){ //if given only 2 parameters
        if(x<=0 || y<=0) return 0;
        if(x==1 && y==1) return 1; //destination reached

        int rightways=maze2(x-1,y);
        int downways=maze2(x,y-1);

        int totalways=rightways+downways;
        return rightways;
    }

    int main(){
        cout<<"Enter end matrix coordinates (x and y): ";
        int x,y;
        cin>>x>>y;
        cout<<"Number of ways: "<<mazeWays(1,1,x,y)<<endl;
        printpath(1,1,x,y,"");
        cout<<"Number of ways2: "<<maze2(3,3)<<endl;


    }