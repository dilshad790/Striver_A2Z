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



Node* segregateEvenOdd(Node* &head)
{
    // Write your code here

    Node* es=NULL;
    Node* ee=NULL;
    Node* os=NULL;
    Node* oe=NULL;
    
    Node* temp=head;
    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        {
            if(es!=NULL)
            {
                ee->next=temp;
                ee=temp;
            }
            else{
                es=temp;
                ee=temp;
            }
        }
        else{
            if(os!=NULL)
            {
                oe->next=temp;
                oe=temp;
            }
            else{
                os=temp;
                oe=temp;
            }
        }
        temp=temp->next;
    }
if(oe->next!=NULL)
oe->next=NULL;
ee->next=os;
return es;
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

Node* es=segregateEvenOdd(head);
print(es); 


    return 0;
}