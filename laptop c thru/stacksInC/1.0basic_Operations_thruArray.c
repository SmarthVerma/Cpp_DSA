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


int main(){
    stack st;
    initializeStack(&st);

    pushStack(&st,14);  //0
    pushStack(&st,4);   //1
    pushStack(&st,21);  //2
    pushStack(&st,32);  //3
    pushStack(&st,691); //4



  printStack(&st);

    printf("\nPop ELement: %d\n",popStack(&st));
    printf("Pop ELement: %d\n",popStack(&st));
    printf("Pop ELement: %d\n",popStack(&st));
    printf("Pop ELement: %d\n",popStack(&st));
    printf("Pop ELement: %d\n",popStack(&st));
    printf("Pop ELement: %d\n",popStack(&st));

    printf("Top ELement: %d\n",peek(&st));


}