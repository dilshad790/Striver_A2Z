#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};

Node* newNode(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void printNode(Node* head)
{
    while(head->next!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* removeDuplicate(Node* head)
{
    Node*ptr,*ptr2,*dup;
    ptr=head;
    while(ptr!=NULL && ptr->next!=NULL)
    {
        ptr2=ptr;
        while(ptr2->next!=NULL)
        {
            if(ptr->data==ptr2->next->data)
            {   
                dup=ptr;
                ptr2=ptr->next;
                delete(dup);
                ptr=ptr2;
                
            }
            else ptr2=ptr2->next;
        }
        ptr=ptr->next;
    }
}
int main()
{
    Node* start=newNode(10);
    start->next=newNode(12);
    start->next->next=newNode(15);
    start->next->next->next=newNode(10);
    start->next->next->next->next=newNode(12);
    start->next->next->next->next->next=newNode(25);
    start->next->next->next->next->next->next=newNode(30);
removeDuplicate(start);
printNode(start);

 return 0;
}