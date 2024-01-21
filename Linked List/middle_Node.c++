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

Node* middleNode(Node* &head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;


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
    Node *node1 = new Node(1);
    Node* head=node1;
    Node *node2 = new Node(3);
    node1->next=node2;
    Node *node3 = new Node(4);
    node2->next=node3;
    Node *node4 = new Node(7);
    node3->next=node4;
    Node *node5 = new Node(1);
    node4->next=node5;
    Node *node6 = new Node(2);
    node5->next=node6;
    Node *node7 = new Node(6);
    node6->next=node7;

    print(head);

    Node* middle=middleNode(head);
    print(middle);
    cout<<middle->data;




    return 0;
}