#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int * array;
};
int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }else{
        return 0;
    }
}
int main() {
    struct stack *s;
    s->size = 1;
    s->top = -1;
    s->array = (int *)malloc(s->size*sizeof(int));  
    //pushing an element 
    s->array[0] = 4;
    s->top++;
    
    if(isEmpty(s)){
        printf("the stack is empty\n");
    }else{
        printf("The stack is not empty\n");
    }
    if(isFull(s)){
        printf("Stack is Full\n");
    }else{
        printf("Stack is not Full\n");
    }
    return 0;
}