#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} node;

typedef struct HeightInfo {
    int leftHeight;
    int rightHeight;
} HeightInfo;

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

void preordertraversal(node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preordertraversal(root->left);
        preordertraversal(root->right);
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

   
    if (current == NULL) {
        return NULL;
    }
 
    if (current->right != NULL) {
        current = current->right;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }
 
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
    return (a > b) ? a : b;
}

HeightInfo height(node* root) {
    HeightInfo info;
    if (root == NULL) {
        info.leftHeight = -1;
        info.rightHeight = -1;
    } else {
        HeightInfo leftInfo = height(root->left);
        HeightInfo rightInfo = height(root->right);
        info.leftHeight = 1 + leftInfo.leftHeight;
        info.rightHeight = 1 + rightInfo.rightHeight;
    }
    return info;
}

void printLeafHeights(node* root, int depth) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) {
        printf("Height of leaf node %d is %d\n", root->data, depth);
        return;
    }
    printLeafHeights(root->left, depth + 1);
    printLeafHeights(root->right, depth + 1);
}
void insertatleft(node*root){
    
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
        printf("\n1: Print BST (inorder)\n2: Find successor\n3: Find height of BST\n4: Print heights of leaf nodes\n5: Check if heights from both sides are equal\n");
        int choice;
        printf("enter your choice: ");
        scanf("%d", &choice);
        printf("preorder traversal of BST : ");
        preordertraversal(root);
        printf("\n");

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
            HeightInfo info = height(root);
            printf("Height of BST:\nLeft: %d\nRight: %d\n", info.leftHeight, info.rightHeight);
        } else if (choice == 4) {
            printf("Leaf node heights:\n");
            printLeafHeights(root, 0);
        } else if (choice == 5) {
            HeightInfo info = height(root);
            if (info.leftHeight == info.rightHeight)
                printf("The height from both sides of the BST is equal.\n");
            else
                printf("The height from both sides of the BST is not equal.\n");
        } else {
            printf("invalid choice!\n");
        }
    }

    freeTree(root);

    return 0;
}
