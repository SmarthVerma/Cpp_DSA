#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 1000;

typedef struct{
    int front;
    int rear;
    int arr[MAX_SIZE];
}CircQueue;

bool isFull(CircQueue *qu){
    if(qu->(rear+1)%MAX_SIZE==qu->front)
    return 1;
    else return 0;
    
}

bool isEmpty(CircQueue *qu){
    if(qu->front==-1 && qu->rear==-1)
    return 1;
    else return 0;
    
}

void enqueue(CircQueue* queue, int data) {
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

int main(){
    CircQueue qu;
    qu.front=0;3
    qu.rear=0;

    int n;
    printf("Enter the number of elements you want to enter");
    scanf("%d",&n);

    int element[n];
        for(int i=0; i<n; i++){
            qu.front
        }

}