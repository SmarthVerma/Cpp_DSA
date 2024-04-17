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

void push_at_bottom(stack<int> &stck,int val){
    stack<int> temp;
    while (!stck.empty()) {
        temp.push(stck.top());
        stck.pop();
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
    cout<<"enter number";
    int n;
    cin>>n;

    push_at_bottom(st,n);

    print(st);
 
    return 0;
}
