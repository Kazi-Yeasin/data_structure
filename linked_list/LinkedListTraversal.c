#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
void linkedListTraversal(struct node* ptr){
	while(ptr != NULL){
		printf("Element : %d\n", ptr->data);
		ptr = ptr->next;
	}
}
int main(){
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* head1 = (struct node*)malloc(sizeof(struct node));
	struct node* head2 = (struct node*)malloc(sizeof(struct node));
	struct node* head3 = (struct node*)malloc(sizeof(struct node));
	struct node* head4 = (struct node*)malloc(sizeof(struct node));

	head->data = 7;
	head->next = head1;

	head1->data = 8;
	head1->next = head2;

	head2->data = 9;
	head2->next = head3;

	head3->data = 10;
	head3->next = head4;

	head4->data = 11;
	head4->next = NULL;

	linkedListTraversal(head);

	return 0;
}