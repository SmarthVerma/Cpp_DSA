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
            cout<<st.top()<<" ";
            temp.push(st.top());
            st.pop();
        }
        //putting elements back to st
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }

        cout<<endl;

            //printing in reverse order
        while(st.size()>0){
            cout<<st.top()<<" ";
            st.pop();
        }   // pr elements gayaab hogye;

}