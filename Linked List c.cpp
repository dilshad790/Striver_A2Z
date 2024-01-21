#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void travers(struct node *ptr)
{   while(ptr!=0){
    printf("Element : %d\n",ptr->data);
    ptr=ptr->next;
}
}
int main()
{
struct node *head;
struct node *second;
struct node *third;

head=(struct node *)malloc(sizeof(struct node));
head=(struct node *)malloc(sizeof(struct node));
head=(struct node *)malloc(sizeof(struct node));

head->data=7;
head->next=second;

second->data=22;
second->next=third;

third->data=55;
third->next=NULL;

travers(head);
 return 0;
}

