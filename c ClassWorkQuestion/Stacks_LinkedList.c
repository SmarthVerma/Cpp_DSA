#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* top = NULL;


void push(int x) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: Memory allocation failed\n");
        return;
    }
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        printf("Error: No element to pop\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    free(temp);
}

int peek() {
    if (top == NULL) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return top->data;
}

void print() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("\nStack: \n");
    struct Node* current = top;
    while (current != NULL) {
        printf("%d \n", current->data);
        current = current->next;
    }
    printf("\n\n");
}

int main() {
    while (1) {
        int choice;
        printf("\nPress 1 for Push\n");
        printf("Press 2 for Pop\n");
        printf("Press 3 for Print\n\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the number: ");
                int x;
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}
