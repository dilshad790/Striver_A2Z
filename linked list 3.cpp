#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void traversal(struct node *head)
{
	if(head==NULL)
	printf("Node is Empty");
	
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{	printf("%d\n",ptr->data);
		ptr=ptr->next;
	
	}
}
int main()
{
struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=7;
head->next=NULL;
traversal(head);

return 0;
}

