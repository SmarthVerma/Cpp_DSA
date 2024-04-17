#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    cout<<st.size()<<endl;
    st.push(46);
    st.push(31);
    st.push(73);
    st.push(10);
    cout<<st.size()<<endl;

    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    cout<<"Top element is: "<<st.top()<<endl;
    
    // cout<<st; // full stack nahi print hota
    

}
