#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct queue {
    int rear;
    int front;
    int items[MAX_SIZE];
} Queue;

void initialize(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue *q) {
    return q->front == -1;
}

bool isFull(Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Enqueue operation failed.\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0; // If the queue is empty, set front to 0
    }
    q->items[++q->rear] = value;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Dequeue operation failed.\n");
        return -1;
    }

    int data = q->items[q->front];

    if (q->front == q->rear) {
        // If only one element is present, reset front and rear
        q->front = -1;
        q->rear = -1;
    } else {
        q->front++;
    }

    return data;
}

int peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Peek operation failed.\n");
        return -1;
    }
    return q->items[q->front];
}

void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to print.\n");
        return;
    }
    
    printf("Queue elements:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
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

    return 0;
}
