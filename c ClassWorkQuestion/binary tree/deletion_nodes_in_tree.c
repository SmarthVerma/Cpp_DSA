#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};
 
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

 
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    return root;
}


struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}   



struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

 
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

    
 
int main() {
    struct Node* root = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the data: ");
        int val;
        scanf("%d", &val);
        root = insertNode(root, val);
    }

    printf("Inorder traversal of the given tree: ");
    inorder(root);
    printf("\n");

    printf("Enter the number of nodes to delete: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the data to delete: ");
        int val;
        scanf("%d", &val);
        root = deleteNode(root, val);
        printf("Inorder traversal after deleting %d: ", val);
        inorder(root);
        printf("\n");
    }

    return 0;
}
