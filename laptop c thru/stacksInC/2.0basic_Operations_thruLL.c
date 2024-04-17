#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// LL bnayge toh yeh toh likhynge na bhidu
typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct{
    Node* top;
}Stack;


void initialize(Stack* stck){
    stck->top=NULL;
}

bool isEmpty(Stack* stck){
        if(stck->top==NULL){
            return true;
        } else  return false;

        // return stck->top==NULL;
}

// bool isFull()  nahiii hotaaaa fn when using stack usinjg linked list
void pushStack(Stack* stck, int value){
    Node* newNode= (Node*)malloc(sizeof(Node));

    /*  // faltuu ka fflex
        if(newNode==NULL){
            printf("Memory allocatiojn failed\n");
            exit(EXIT_ FAILURE);
        }
    */

   newNode->data=value;
   newNode->next=stck->top; // downtrend kr ra ha stack m, explain krunga
   stck->top= newNode;  // new top ban ra ha, top++; smjo

}

int pop(Stack* stck){
    if(isEmpty(stck)){
        printf("Stack underflow\n");
        return -1;
    }
    int value=stck->top->data;
    Node* temp= stck->top; // delete krne k liy;
    stck->top=stck->top->next;
    free(temp);
    return value;
}

int peek(Stack* stck){
    if(isEmpty(stck)){
        printf("Stack is empty\n");
        return -1;
    }
    return stck->top->data;
}

void printingStack(Stack* stck){
    if(isEmpty(stck)){
        printf("Nothing to print, Stack is empty\n");
        return -1;
    }
    printf("Elements in stack: \n");
    Node* temp= stck->top;
        while(temp){
            printf("%d\n",temp->data);
            temp=temp->next;  
        }
}

int main(){
    Stack st;
    initialize(&st);

    pushStack(&st, 46);
    pushStack(&st, 31);
    pushStack(&st, 19);
    pushStack(&st, 78);

    printingStack(&st);
    printf("Peek element: %d\n",peek(&st));
    
    printf("Pop: %d\n",pop(&st));
    printf("Pop: %d\n",pop(&st));
    printf("Pop: %d\n",pop(&st));

    printingStack(&st);



}