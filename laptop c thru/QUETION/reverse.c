// prebuild in cpp but not here son
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];
    int top;
}stack;

void initializeStack(stack *stck){
    stck->top=-1;
}

bool isEmpty(stack* stck){
    if(stck->top==-1){
        return true;
    }
    else{
        return false;
    }
}

/*  //SEXY WAY! 

bool isEmpty(stack* stck){
    return stck->top==-1;
}

*/

bool isFull(stack* stck){
    if(stck->top==MAX_SIZE-1){
        return true;
    }
    else return false;
}

/* //SEXY WAY!

bool isFull(stack* stck){
    return stck->top==MAX_SIZE-1;
}

*/


void pushStack(stack* stck, int value){
        // check krna mt bhule, wrna mai danda marunga
        if(isFull(stck)){
            printf("Stack OverFlow!");
            return;
        }
        else{
            stck->top+=1;
        }

        int iterate=stck->top;
        stck->arr[iterate]= value;
}
void pushStackIndex(stack* stck, int value, int index) {
    if (isFull(stck)) {
        printf("Stack OverFlow!\n");
        return;
    }

    stack helper;
    initializeStack(&helper);

    // Move elements from stck to helper until the desired index is reached
    while (stck->top >= index) {
        pushStack(&helper, popStack(stck));
    }

    // Push the new value into stck
    pushStack(stck, value);

    // Restore elements from helper back to stck
    while (!isEmpty(&helper)) {
        pushStack(stck, popStack(&helper));
    }
}


int popStack(stack* stck){
    if(isEmpty(stck)){ // no &, q ki already pointer ha
            printf("Stack underFlow!\n");
            return -1;
    }

        int iterate=stck->top;
        int data=stck->arr[iterate];
        stck->top--;
        return data;

        /* // SEXY WAY!!

        return stck->arr[stck->top--]
        */ 
}

int peek(stack* stck){
    if(isEmpty(stck)){
            printf("Stack underFlow!\n");
            return -1;
    }
    int iterate=stck->top;
    int data=stck->arr[iterate];
    return data;

    // return stck->arr[top];

}
int stackBottom(stack* stck){
    return stck->arr[0];
}

void printStack(stack *stck){
    if(isEmpty(stck)){
        printf("\nNothing to print as stack is empty");
        return;
    }
    printf("Elements in stacks:\n");
    for(int i=stck->top; i>=0; i--){    
        printf("%d\n",stck->arr[i]);
    }
}

void transfer(stack* stck, stack* stck2) {
    if (isEmpty(stck)) {
        printf("Stack underFlow!\n");
        return;
    }

    if (isFull(stck2)) {
        printf("Stack OverFlow!\n");
        return;
    }

    if (stck2->top == -1) {
        stck2->top = 0; // Set top to 0 if stck2 is empty
    }

    // Transfer elements from stck to stck2
   for (int i = stck->top; i >= 0; i--) {
        if (isFull(stck2)) {
            printf("Destination stack is full. Transfer aborted.\n");
            return;
        }
        pushStack(stck2, stck->arr[i]); // Push the element from stck to stck2
    }
}

int sizeStack(stack* str){
    int count = 0;
    int n = str->top; 
    
    while(n >= 0){ 
        n--; 
        count++;
    }

    return count;
}


int main(){
    stack st;
    stack st2;
    stack st3;
    initializeStack(&st);
    initializeStack(&st2);
    initializeStack(&st3);

    pushStack(&st,14);  //0
    pushStack(&st,4);   //1
    pushStack(&st,21);  //2
    pushStack(&st,32);  //3
    pushStack(&st,691); //4
    
    printStack(&st);
    
    // transfer(&st,&st2);

    // printStack(&st2);

    // transfer(&st2,&st3);

    // printStack(&st3);

    // transfer(&st3,&st);

    // printStack(&st);
    pushStackIndex(&st, 79, 3);

    printStack(&st);


}