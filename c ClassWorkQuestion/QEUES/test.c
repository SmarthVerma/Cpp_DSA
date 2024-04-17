#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int front, rear;
} CircularQueue;

CircularQueue* createQueue() {
    CircularQueue* queue = (CircularQueue*)malloc(sizeof(CircularQueue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

int isEmpty(CircularQueue* queue) {
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(CircularQueue* queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

void enqueue(CircularQueue* queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    } else if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->items[queue->rear] = data;
}

int dequeue(CircularQueue* queue) {
    int data;
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    } else if (queue->front == queue->rear) {
        data = queue->items[queue->front];
        queue->front = queue->rear = -1;
    } else {
        data = queue->items[queue->front];
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return data;
}

void display(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    int i = queue->front;
    printf("Queue elements: ");
    do {
        printf("%d ", queue->items[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (queue->rear + 1) % MAX_SIZE);
    printf("\n");
}

int main() {
    CircularQueue* queue = createQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);

    display(queue);

    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));

    display(queue);

    enqueue(queue, 6);
    enqueue(queue, 7);

    display(queue);

    return 0;
}
