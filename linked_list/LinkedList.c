#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};

int main (){
    printf("Enter the size of List : \n");
    int n; scanf("%d", &n);
    printf("Enter the data : \n");

    struct node *head = NULL;
    struct node *tail = NULL;

    while(n--){
        int x; scanf("%d", &x);
        struct node *newcode = (struct node*)malloc(sizeof(int *));
        newcode->data = x;
        newcode->next = NULL;
       
        if(head == NULL){
            head=tail=newcode;
        }else{
            tail->next = newcode;
            tail = tail->next;
        }
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return 0;
}