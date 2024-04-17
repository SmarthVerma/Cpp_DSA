#include <iostream>
#include <stack>
using namespace std;

void displayRevRec(stack<int> &st){
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
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}

void print(stack<int> &stck) {
    cout<<endl;
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

    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    st.push(10);


    displayRec(st);

    print(st);
 
    return 0;
}
