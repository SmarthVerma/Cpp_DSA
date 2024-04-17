#include <stdio.h>
#include <stdbool.h>
#define Max_Size 1000

typedef struct {
    char items[Max_Size];
    int top;
} stack;

bool isEmpty(stack *st) {
    return (st->top == -1);
}

bool isFull(stack *st) {
    return (st->top == Max_Size - 1);
}

void pushStack(stack *st, char val) {
    if (isFull(st)) {
        printf("Overflow Stack\n");
    } else {
        st->top++;
        st->items[st->top] = val;
    }
}

char pop(stack *st) {
    if (isEmpty(st)) {
        printf("Stack underflow\n");
        return 0;
    }
    return st->items[st->top--];
}



typedef struct {
    char items[Max_Size];
    int front;
    int rear;
} queue;

bool isQueueEmpty(queue *qt) {
    return qt->front == -1;
}

bool isQueueFull(queue *qt) {
    if (qt->rear == Max_Size - 1 && qt->front == 0)
        return true;
    else
        return false;
}

void enqueue(queue *qt, char value) {
    if (isQueueFull(qt)) {
        printf("Queue is full\n");
        return;
    }
    if (qt->front == -1) {
        qt->front = 0;
        qt->rear = 0;
    } else {
        qt->rear++;
    }
    qt->items[qt->rear] = value;
}

char dequeue(queue *qt) {
    if (isQueueEmpty(qt)) {
        printf("Queue is empty\n");
        return '\0';
    }
    char dequeuedItem = qt->items[qt->front];
    if (qt->front == qt->rear) {
        qt->front = -1;
        qt->rear = -1;
    } else if (qt->front == Max_Size - 1) {
        qt->front = 0;
    } else {
        qt->front++;
    }
    return dequeuedItem;
}

void printStack(stack *st) {
    if (isEmpty(st)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements in the stack:\n");
    for (int i = st->top; i >= 0; i--) {
        printf("%c\n", st->items[i]);
    }
}

char peek(stack *st) {
    if (isEmpty(st)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return st->items[st->top];
}

int main() {
    stack st;
    st.top = -1;

    queue qt;
    qt.front = -1;
    qt.rear = -1;

    printf("How many elements you want to start with: ");
    int n;
    scanf("%d", &n);
    char elements[n];

    printf("Enter: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &elements[i]);
    }

    for (int i = 0; i < n; i++) {
        pushStack(&st, elements[i]);
    }

    printf("Elements in stack st: ");
    for (int i = n-1; i >= 0; i--) {
        printf("%c ", st.items[i]);
    }

    int n2;
    printf("\nEnter number you want remove from stack: ");
    scanf("%d",&n2);
    // remove from start of q
    for (int i = 0; i < n2; i++) {
        char poppedElement = pop(&st);
        if (poppedElement != '\0') {
            enqueue(&qt, poppedElement);
        }
    }

    printStack(&st);

    printf("\nAfter given operations... POPPED elements were added to qeue\n");
    // inserting back to stack from deleted ques
    int n3;
    printf("Enter number you want to delte from qeue and add back to stack: ");
    scanf("%d",&n3);

    for (int i = 0; i < n3; i++) {
        char dequeuedElement = dequeue(&qt);
        if (dequeuedElement != '\0') {
            pushStack(&st, dequeuedElement);
        }
    }

  
printStack(&st);

    printf("hence peek is : %c", peek(&st));

    
   

    return 0;
}
