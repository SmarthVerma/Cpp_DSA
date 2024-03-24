#include <iostream>
using namespace std;

    int mazeWays(int sx,int sy,int ex,int ey){
        if(sx>ex || sy>ey) return 0;
        if(sx==ex && sy==ey) return 1;
        int rightways=mazeWays(sx+1,sy,ex,ey);
        int downways=mazeWays(sx,sy+1,ex,ey);
        int totalways= downways + rightways;
        return totalways;
        
    }
    int main(){
        cout<<"Enter end matrix coordinates (x and y): ";
        int x,y;
        cin>>x>>y;
        cout<<mazeWays(1,1,x,y);

    }