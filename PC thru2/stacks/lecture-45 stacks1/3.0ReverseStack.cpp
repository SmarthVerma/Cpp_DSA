#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &stck){
    stack<int> temp;
            while(stck.size()>0){
            cout<<stck.top()<<" ";
            temp.push(stck.top());
            stck.pop();
        }
        //putting elements back to st
        while(temp.size()>0){
            stck.push(temp.top());
            temp.pop();
        }

        cout<<endl;



}

int main(){
    stack<int> st;

    st.push(48);
    st.push(12);
    st.push(95);
    st.push(643);
    st.push(41);

    stack<int> uv;
    stack<int> wx;

        print(st);
        
        //putting elements from st->uv
        while(st.size()>0){


            uv.push(st.top());
            st.pop();
        }
        //putting elements from uv->wx
        while(uv.size()>0){
            wx.push(uv.top());
            uv.pop();
        }
        //putting back to st
        while(wx.size()>0){
            st.push(wx.top());
            wx.pop();
        }
        print(st);




}