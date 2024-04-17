#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node structure for doubly linked list
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Double-ended queue structure
typedef struct {
    Node* front;
    Node* rear;
    int size;
} Deque;

// Function to initialize a double-ended queue
void initializeDeque(Deque* deque) {
    deque->front = NULL;
    deque->rear = NULL;
    deque->size = 0;
}

// Function to check if the double-ended queue is empty
bool isEmpty(Deque* deque) {
    return deque->size == 0;
}

// Function to insert an element at the front of the double-ended queue
void insertFront(Deque* deque, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Insertion at front failed.\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = deque->front;

    if (isEmpty(deque)) {
        deque->rear = newNode;
    } else {
        deque->front->prev = newNode;
    }
    deque->front = newNode;
    deque->size++;
}

// Function to insert an element at the rear of the double-ended queue
void insertRear(Deque* deque, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Insertion at rear failed.\n");
        return;
    }
    newNode->data = value;
    newNode->prev = deque->rear;
    newNode->next = NULL;

    if (isEmpty(deque)) {
        deque->front = newNode;
    } else {
        deque->rear->next = newNode;
    }
    deque->rear = newNode;
    deque->size++;
}

// Function to delete an element from the front of the double-ended queue
int deleteFront(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Queue is empty. Deletion from front failed.\n");
        return -1;
    }

    int data = deque->front->data;
    Node* temp = deque->front;
    deque->front = deque->front->next;
    if (deque->front == NULL) {
        deque->rear = NULL;
    } else {
        deque->front->prev = NULL;
    }
    free(temp);
    deque->size--;
    return data;
}

// Function to delete an element from the rear of the double-ended queue
int deleteRear(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Queue is empty. Deletion from rear failed.\n");
        return -1;
    }

    int data = deque->rear->data;
    Node* temp = deque->rear;
    deque->rear = deque->rear->prev;
    if (deque->rear == NULL) {
        deque->front = NULL;
    } else {
        deque->rear->next = NULL;
    }
    free(temp);
    deque->size--;
    return data;
}

// Function to display the elements of the double-ended queue
void displayDeque(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Queue is empty. Nothing to display.\n");
        return;
    }
    printf("Double-ended Queue elements:\n");
    Node* current = deque->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to deallocate memory used by the double-ended queue
void destroyDeque(Deque* deque) {
    while (!isEmpty(deque)) {
        deleteFront(deque);
    }
}

int main() {
    Deque deque;
    initializeDeque(&deque);

    insertFront(&deque, 10);
    insertRear(&deque, 20);
    insertFront(&deque, 30);
    insertRear(&deque, 40);

    displayDeque(&deque);

    deleteFront(&deque);
    deleteRear(&deque);

    displayDeque(&deque);

    destroyDeque(&deque);

    return 0;
}
