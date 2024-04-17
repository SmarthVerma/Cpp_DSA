#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

void initialize(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

bool isEmpty(Queue* q) {
    return q->front == NULL;
}


void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } 
        q->rear->next = newNode;
        q->rear = newNode;

}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Dequeue operation failed.\n");
        return -1;
    }

    Node* temp = q->front;
    int data = temp->data;

    q->front = q->front->next;
    free(temp);

    if (q->front == NULL) {
        q->rear = NULL;
    }

    return data;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Peek operation failed.\n");
        return -1;
    }
    return q->front->data;
}

void printQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to print.\n");
        return;
    }   
    printf("Queue elements:\n");
    Node* current = q->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    printf("Front of the queue: %d\n", peek(&q));

    dequeue(&q);
    dequeue(&q);

    printf("Front of the queue after dequeue: %d\n", peek(&q));

    printQueue(&q); 

    return 0;
}

