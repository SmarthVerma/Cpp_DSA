#include <stdio.h>

#define MAX_Size 100

int A[MAX_Size];
int top = -1;
int top2=-1
int B[MAX_Size];

void push(int x) {
    if (top == MAX_Size - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    top++;
    A[top] = x;
}

void pop() {
    if (top == -1) {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}

int peek() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return A[top];
}

void print() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("\nStack: \n");
    for (int i = top; i >= 0; i--) {
        printf("%d \n", A[i]);
    }
    printf("\n\n");
}

void reverse(){
    while(top==-1){
        top2++;
        B[top2]=A[top];
        top--;
    }

}

int main() {
    while (1) {
        int choice;
        printf("\nPress 1 for Push\n");
        printf("Press 2 for Pop\n");
        printf("Press 3 for Print\n\n");
        scanf("%d", &choice);

    //     switch (choice) {
    //         case 1:
    //             printf("\nEnter the number: ");
    //             int x;
    //             scanf("%d", &x);
    //             push(x);
    //             break;

    //         case 2:
    //             pop();
    //             break;

    //         case 3:
    //             print();
    //             break;

    //         default:
    //             printf("Invalid choice\n");
    //             break;
    //     }
    // }

        

    return 0;
}
