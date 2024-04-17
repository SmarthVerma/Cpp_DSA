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

int main() {
    stack<int> st;

    st.push(48);
    st.push(12);
    st.push(95);
    st.push(643);
    st.push(41);

    stack<int> uv=st;   // diff method se bhi krnio

    print(st);
    print(uv);

 

    return 0;
}
