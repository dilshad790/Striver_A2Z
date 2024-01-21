#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
Node(int d)
{
    this->data=d;
    this->next=NULL;
}
};

// reverse using recursion
// void reverse(Node*& head,Node* curr,Node* prev)
// {
// // base case
// if(curr==NULL)
// {
//     head=prev;
//     return;
// }
// Node* forward=curr->next;
// reverse(head,forward,curr);
// curr->next=prev;


// }

Node* reverse(Node* head)
{
    if(head==NULL | head->next==NULL)
    return head;

Node* chhotahead=reverse(head->next);
head->next->next=head;
head->next=NULL;
return chhotahead;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    // Your code here

    Node *node1 = new Node(6);
    Node* head=node1;
    Node *node2 = new Node(5);
    node1->next=node2;
    Node *node3 = new Node(3);
    node2->next=node3;
    Node *node4 = new Node(4);
    node3->next=node4;
    Node *node5 = new Node(7);
    node4->next=node5;
    Node *node6 = new Node(1);
    node5->next=node6;
    Node *node7 = new Node(2);
    node6->next=node7;
print(head); 

Node* prev=NULL;
Node* curr=head;

// reverse(head,curr,next);
Node* newhead=reverse(node1);
print(newhead); 

    return 0;
}