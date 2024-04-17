#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &stck) {
    stack<int> temp;
    while (!stck.empty()) {
        cout << stck.top() << " ";
        temp.push(stck.top());
        stck.pop();
    }
    // putting elements back to st
    while (!temp.empty()) {
        stck.push(temp.top());
        temp.pop();
    }

    cout << endl;
}

void push_at_bottom(stack<int> &stck,int val,int idx){
    stack<int> temp;
    int i=1;
    while (i<=idx-1) {
        temp.push(stck.top());
        stck.pop();
        i++;
    }
    stck.push(val);
     while (!temp.empty()) {
        stck.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> st;

    st.push(48);
    st.push(12);
    st.push(95);
    st.push(643);
    st.push(41);


    print(st);
    cout<<"enter number amd index";
    int n;
    cin>>n;
    int idx;
    cin>>idx;

    push_at_bottom(st,n,idx);
    print(st);
 
    return 0;
}
