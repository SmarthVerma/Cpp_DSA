#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(46);
    st.push(31);
    st.push(63);

    cout << st.top();  // Access the top element
    st.pop();
    return 0;
}
