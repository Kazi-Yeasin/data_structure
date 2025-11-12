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
int push(struct stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return 0;  // failure
    } else {
        s->top++;
        s->array[s->top] = value;
        printf("pushed %d to stack\n", value);
        return 1;  // success
    }
}
int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->array = (int *)malloc(s->size*sizeof(int));  
    //pushing an element 
    // s->array[0] = 4;
    // s->top++;
    
    // if(isEmpty(s)){
    //     printf("the stack is empty\n");
    // }else{
    //     printf("The stack is not empty\n");
    // }
    // if(isFull(s)){
    //     printf("Stack is Full\n");
    // }else{
    //     printf("Stack is not Full\n");
    // }
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    for(int i=0; i<5; i++){
        printf("%d\n",s->array[i]);
       
    }
    free(s->array);
    free(s);
    
    return 0;
}