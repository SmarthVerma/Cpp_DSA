#include <iostream>
#include <stack>
using namespace std;

void reverseStackRec(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRevRec(st);
    st.push(x);
}
void displayRec(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayRevRec(st);
    cout<<x<<" ";
    st.push(x);
}



int main() {
    stack<int> st;

    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    st.push(0);


    displayRevRec(st);
 
    return 0;
}
