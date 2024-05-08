#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to traverse the left subtree boundary
void traverseLST(struct Node* root) {
    if (root) {
        if (root->left) {
            printf("%d ", root->data);
            traverseLST(root->left);
        } else if (root->right) {
            printf("%d ", root->data);
            traverseLST(root->right);
        }
    }
}

// Function to traverse the right subtree boundary
void traverseRST(struct Node* root) {
    if (root) {
        if (root->right) {
            printf("%d ", root->data);
            traverseRST(root->right);
        } else if (root->left) {
            printf("%d ", root->data);
            traverseRST(root->left);
        }
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 30);
    insert(root, 25);
    insert(root, 35);
    insert(root, 15);
    insert(root, 27);
    insert(root, 10);
    insert(root, 37);
    insert(root, 35);
    insert(root, 33);
    insert(root, 34);

    // Traverse and print the left subtree boundary
    printf("Left Subtree Boundary: ");
    traverseLST(root->left);
    printf("\n");

    // Traverse and print the right subtree boundary
    printf("Right Subtree Boundary: ");
    traverseRST(root->right);
    printf("\n");

    return 0;
}
