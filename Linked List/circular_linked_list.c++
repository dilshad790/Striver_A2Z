#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtTail(Node* &head,int data)
{
Node* temp=head;
Node*  newnode=new Node(data);
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
temp=newnode;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" "<<temp->next->data;
    
}

int main()
{
    // Your code here 
    // INSERT AT TAIL 
    // METHOD 1
    // Node *node1 = new Node(10);
    // Node *node2 = new Node(12);
    // node1->next=node2;
    // Node *node3 = new Node(13);
    // node2->next=node3;
    // node3->next=node1;
    // print(node1);

    // METHOD2
    Node* node=new Node(15);
    Node* head=node;
    insertAtTail(head,20);
    print(head);


    return 0;
}