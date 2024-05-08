#include <stdio.h>
#include <stdlib.h>  

typedef struct Node {
    int data;
    struct Node* left, *right;
} node;

node* create_node(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* insert(node* root, int data) {
    if (root == NULL) {
        return create_node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void traverse_leaf_nodes(node* root) {
    if (root != NULL) {
        if (root->left == NULL && root->right == NULL) {
            printf("%d ", root->data);  
        }
        traverse_leaf_nodes(root->left);
        traverse_leaf_nodes(root->right);
    }
}

node* find_predecessor(node* root, node* leaf) {
    if (root == NULL || leaf == NULL) {
        return NULL;
    }
    if (root == leaf) {
        return NULL;  
    }
    node* predecessor = NULL;
    node* current = root;
    while (current != leaf) {
        if (leaf->data > current->data) {
            predecessor = current;  
            current = current->right;
        } else {
            current = current->left;
        }
    }
    return predecessor;
}

void free_tree(node* root) {
    if (root != NULL) {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}

int main() {
    node* root = NULL;
    int big;
    printf("Enter the number you want for root: ");
    scanf("%d", &big);
    root = insert(root, big);
    printf("Enter number of nodes: ");
    int n;
    scanf("%d", &n);
    printf("Processing...\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the data: ");
        int val;
        scanf("%d", &val);
        insert(root, val);
    }
    printf("Leaf nodes: ");
    traverse_leaf_nodes(root);
    printf("\n");

     printf("Predecessors of leaf nodes: \n");
    traverse_leaf_nodes(root);  
    printf("\n");
    traverse_leaf_nodes(root);  
    printf("\n");

  
    free_tree(root);

    return 0;
}
