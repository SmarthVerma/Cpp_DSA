#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node*next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

class linkedList{
    public:
    Node* head;
    int size;
        linkedList(){
            head=NULL;
            this->size=0;
        }

    void insert(int val){
        Node* newNode= new Node(val);
            if(size==0){
                head=newNode;
                size++;
                return;
            }

            Node* temp= head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=newNode;
            size++;

    }

    void delete_value(int x){
    if(size==0){
     cout<<"nothing to delete";   
    }
    if(head->val==x){
        head=head->next;
        size--;
        return;
    }
        Node* temp=head;    
        while(temp->next->val!=x && temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->next ==nullptr){
            cout<<"X node not found";
            return;
        }
        temp->next=temp->next->next;
        size--;
    }

};