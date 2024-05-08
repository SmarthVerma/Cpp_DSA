#include <stdio.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node* createnode(int data){
    Node* newNode= (Node*) malloc(sizeof(Node*));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

Node* insertNode(Node* root, int data){
    if(root==NULL){
        root=createNode(data);
    }
     else{
        if(root->data <= data){

        }
     }
}

int main(){
    

}