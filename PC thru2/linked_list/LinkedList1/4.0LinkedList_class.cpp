#include <iostream>

using namespace std;

class Node
{
    public: 
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class LinkedList
{
    public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void display()
    {
        Node* temp= head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
   
    void insert_atEnd(int val)
    {
        Node *newNode = new Node(val);
        if(size==0){
            head=tail=newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void insert_atFront(int val)
    {
        Node *newNode = new Node(val);
        if(size==0){
            head=tail=newNode;
        }else{

        newNode->next = head;
        head = newNode;
        }
        size++;
    }

    void insert_atIndex(int val, int idx){
        Node *newNode = new Node(val);
        if(idx > size || idx < 0){
            cout<<"invalid idx";
            return;
        }
        if(idx==0){
            insert_atFront(val);
            return;
        }
        if(idx==size){
            insert_atEnd(val);
            return;
        }
        int i=0;
        Node *temp= head;
        while(i < idx-1){
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;

    }
    void delete_atEnd(){
        Node* temp=head;
        if(size==0){
            cout<<"Nothing to delete";
            return ;
        }
        // if size==1
        if(size==1){
            delete head;
            head=tail=NULL;
            size--;
            return;
        }
        while(temp->next->next){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void delete_atFront(){
        Node* temp=head;
        if(size==0){
            cout<<"Nothing to delete";
            return ;
        }
        // if size==1
        if(size==1){
            delete head;
            head=tail=NULL;
            size--;
            return;
        }

        temp=head->next;
        delete head;
        head=temp;
       
        size--;

        if(head==NULL){
            tail=NULL;
        }
    }

    void delete_atIndex(int idx){
        if(idx<0 || idx>size){
            cout<<"invalid idx";
            return;
        }
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        if(idx==0) delete_atFront();
        if(idx==size-1) delete_atEnd();
        Node* temp=head;

        int i=0;
        while(i<idx-1){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;

    }
    
    int getter(int idx){
        if(idx<0 || idx>=size){
            cout<<"INVALID IDX";
            return -1;
        }
        if(idx==0){
            return head->val;
        }
        int i=0;
            Node* temp= head;
            while(i< idx-1){
                temp=temp->next;
                i++;
            }
            return temp->next->val;
    }

};

int main(){
    LinkedList ll;
    
    ll.insert_atEnd(43);
    ll.insert_atEnd(59);
    ll.insert_atEnd(4);
    ll.display();
    ll.insert_atEnd(143);
    ll.display();
    ll.insert_atFront(791);
    ll.display();
    ll.delete_atEnd();
    ll.delete_atEnd();
    ll.delete_atEnd();
    ll.display();
    ll.insert_atFront(14);
    ll.display();
    ll.insert_atIndex(41,1);
    ll.display();
    cout<<ll.getter(4);
}