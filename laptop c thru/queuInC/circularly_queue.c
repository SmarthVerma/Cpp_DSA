#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Queue {
    int front;
    int rear;
    int size;
    int items[MAX_SIZE];
} Queue;

void initialize(Queue* q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

bool isEmpty(Queue* q) {
    return q->size == 0;
}

bool isFull(Queue* q) {
    return q->size == MAX_SIZE;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)){
        printf("Queue is full. Enqueue operation failed.\n");
        return;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->items[q->rear] = value;
    q->size++;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Dequeue operation failed.\n");
        return -1;
    }

    int data = q->items[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;  
    return data;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Peek operation failed.\n");
        return -1;
    }
    return q->items[q->front];
}

void printQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to print.\n");
        return;
    }
    
    printf("Queue elements:\n");
    int i = q->front;
    for (int count = 0; count < q->size; count++) {
        printf("%d ", q->items[i]);
        i = (i + 1) % MAX_SIZE;
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
