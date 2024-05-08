#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(45);
    Node b(42);
    Node c(12);
    Node d(91);

    a.next= &b;
    b.next= &c;
    c.next= &d;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<a.next->next->val<<endl;
}