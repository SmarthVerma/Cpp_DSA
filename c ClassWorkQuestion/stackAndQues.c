#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent the stack
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++stack->top] = value;
}

// Function to pop an element from the stack
char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack->items[stack->top--];
}

// Structure to represent the queue
typedef struct {
    char items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
bool isQueueEmpty(Queue *queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
bool isQueueFull(Queue *queue) {
    return (queue->rear == MAX_SIZE - 1 && queue->front == 0) || (queue->rear == queue->front - 1);
}

// Function to enqueue an element into the queue
void enqueue(Queue *queue, char value) {
    if (isQueueFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    if (queue->front == -1) {
        queue->front = 0;
        queue->rear = 0;
    } else if (queue->rear == MAX_SIZE - 1) {
        queue->rear = 0;
    } else {
        queue->rear++;
    }
    queue->items[queue->rear] = value;
}

// Function to dequeue an element from the queue
char dequeue(Queue *queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return '\0';
    }
    char dequeuedItem = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else if (queue->front == MAX_SIZE - 1) {
        queue->front = 0;
    } else {
        queue->front++;
    }
    return dequeuedItem;
}

int main() {
    Stack stack;
    Queue queue;
    initialize(&stack);
    initializeQueue(&queue);

    // Push elements onto the stack
    char elements[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for (int i = 0; i < 10; i++) {
        push(&stack, elements[i]);
    }

    // Pop 4 elements from stack and insert into queue
    for (int i = 0; i < 4; i++) {
        char poppedElement = pop(&stack);
        if (poppedElement != '\0') {
            enqueue(&queue, poppedElement);
        }
    }

    // Delete 3 elements from queue
    for (int i = 0; i < 3; i++) {
        dequeue(&queue);
    }

    // Push the deleted elements back into the stack
    while (!isQueueEmpty(&queue)) {
        char dequeuedElement = dequeue(&queue);
        if (dequeuedElement != '\0') {
            push(&stack, dequeuedElement);
        }
    }

    // Print the elements in the stack
    printf("Elements in the stack after operations:\n");
    while (!isEmpty(&stack)) {
        printf("%c\n", pop(&stack));
    }

    return 0;
}
