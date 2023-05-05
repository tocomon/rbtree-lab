#include<stdio.h>
#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

int IsEmpty(){
    if(top<0)
        return 1;
    else
        return 0;
    }

int IsFull(){
    if(top>=MAX_STACK_SIZE-1)
        return 1;
    else
        return 0;
}
 
void push(int value){
    if(IsFull()==1)
        printf("stack is full\n");
    else
        stack[++top] = value; 
}
 
int pop(){
    if(IsEmpty()==1)
        printf("stack is empty\n");
    else 
        return stack[top--];
}

void printStack(){
int i;
   for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}
 
int main(){
    push(3);
    push(5);
    push(12);
    printStack();
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
 
    return 0;
}