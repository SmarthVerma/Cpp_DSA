#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} node;

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node* insertNode(node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

void inorderTraversal(node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
void freeTree(node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}


node* find_successor(node* root, int data) {
     
    node* current = root;
    while (current != NULL && current->data != data) {
        if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    // no node found
    if (current == NULL) {
        return NULL;
    }

    // node has a right subtree
    if (current->right != NULL) {
        current = current->right;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    // node doesn't have a right subtree
    node* successor = NULL;
    node* ancestor = root;
    while (ancestor != current) {
        if (data < ancestor->data) {
            successor = ancestor;
            ancestor = ancestor->left;
        } else {
            ancestor = ancestor->right;
        }
    }
    return successor;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int height(node* root) {
    if (root == NULL) {
        return -1; 
    } else {
        return 1 + max(height(root->left), height(root->right));
    }
}

int main() {
    node* root = NULL;
    int data;
    int n;
    printf("Enter the number of nodes you want to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        root = insertNode(root, data);
    }

    while (1) {
        printf("\n1: Print BST (inorder)\n2: Find successor\n3: Find height of BST\n\n");
        int choice;
        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("inorder traversal of BST: ");
            inorderTraversal(root);
            printf("\n");
        } else if (choice == 2) {
            int suc;
            printf("enter the node for u want to find the successor: ");
            scanf("%d", &suc);

            node* successor = find_successor(root, suc);
            if (successor != NULL) {
                printf("successor of node is: %d\n", successor->data);
            } else {
                printf("node %d has no successor.\n", suc);
            }
        } else if (choice == 3) {
            printf("height of BST: %d\n", height(root));
        } else {
            printf("invalid choice!\n");
        }
    }

    return 0;
}
