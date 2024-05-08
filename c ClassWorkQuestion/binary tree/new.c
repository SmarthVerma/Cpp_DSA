#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
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
    // Note: If data is equal to root->data, you can decide what to do here.
    // For simplicity, let's not insert duplicates.
    return root;
}


void LST_traversing(node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        if (root->left != NULL) {
            LST_traversing(root->left);
        } else if (root->right != NULL) {
            LST_traversing(root->right);
        }
    }
}

void RST_traversing(node* root) {
    if (root != NULL) {
        if (root->right != NULL) {
            RST_traversing(root->right);
        } else if (root->left != NULL) {
            RST_traversing(root->left);
        }
        printf("%d ", root->data);
    }
}
node* find_successor(node* root, int data) {
    // searching for the node
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



int main() {
    node* root = NULL;
    
    int big;
    printf("Enter the number you want for root:");
    scanf("%d",&big);

    root = insert(root, big);
    
    printf("Enter number of nodes");
    int n;
    scanf("%d",&n);
    printf("PRoceesing...\n");
    for(int i=0; i<n; i++){
        printf("Enter the data");
        int val;
        scanf("%d",&val);
        insert(root, val);
    }



    printf("left boundaries: ");
    LST_traversing(root);
    printf("\n");

    printf("right boundaries: ");
    RST_traversing(root);
    printf("\n");




    node* successor = find_successor(root, 34);
    if (successor != NULL) {
        printf("Successor of node 34 is: %d\n", successor->data);
    } else {
        printf("Node 34 has no successor.\n");
    }

    return 0;


    return 0;
}
