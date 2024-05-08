#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node*next;

    Node(int val){
        this->val=val;
        next=NULL;
    }
};
    void display(Node* head){
        while(head){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;

    }

    int size(Node* head){
        int n=0;
         while(head){
            n++;
            head=head->next;
        }
        return n;
    }
    
    void displayrec(Node *head){
        if(head==NULL) return;
        cout<<head->val<<" ";
        displayrec(head->next);
    }
    void revdisplayrec(Node *head){
        if(head==NULL) return;
        revdisplayrec(head->next);
        cout<<head->val<<" ";
    }

    void insert_atEnd(Node *head,int val){
      
        Node* newNode= new Node(val);
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=newNode;
    }

int main(){
    Node* a= new Node(46);
    Node* b= new Node(1);
    Node* c= new Node(27);
    Node* d= new Node(9);

    a->next=b;
    b->next=c;
    c->next=d;

    // display(a);
    // cout<<size(a);
    displayrec(a);
    cout<<endl;
    // revdisplayrec(a);

    insert_atEnd(a,69);
    insert_atEnd(a,6);
    displayrec(a);

    

        
}