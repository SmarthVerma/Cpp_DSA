#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

int main() {
   
    Node* a = new Node(45);
    Node* b = new Node(42);
    Node* c = new Node(12);
    Node* d = new Node(91);

    
    a->next = b;
    b->next = c;
    c->next = d;
t
    Node* temp = a; 
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }


    return 0;
}
