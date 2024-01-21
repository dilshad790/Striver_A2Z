#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;

};

int main()
{
    struct node*head,*newnode,*temp;
    head=0;
    int choice;

    while(choice==0 || choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
printf("Do you want add node press 1 if no press 0");
scanf("%d",&choice);
    }
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}

    
    
 return 0;
}

