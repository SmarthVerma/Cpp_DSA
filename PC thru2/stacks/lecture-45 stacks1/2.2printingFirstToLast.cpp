#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(48);
    st.push(12);
    st.push(95);
    st.push(643);
    st.push(41);

    stack<int> temp;

        while(st.size()>0){
            
            temp.push(st.top());
            st.pop();
        }
        // printing from first to last
        while(temp.size()>0){
            cout<<temp.top()<<" ";
            st.push(temp.top());
            temp.pop();
        }

        cout<<endl;

}