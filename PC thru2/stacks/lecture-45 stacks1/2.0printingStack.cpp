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

    //printing in reverse order
        while(st.size()>0){
            cout<<st.top()<<" ";
            st.pop();
        }   // pr elements gayaab hogye;

}