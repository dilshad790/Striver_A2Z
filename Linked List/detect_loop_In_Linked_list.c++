#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &head,int data)
{ Node* newnode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    { temp=temp->next;

    }
temp->next=newnode;
}
bool detectLoop(Node* head)
{ map<Node*,bool>mpp;
Node* temp=head;
while(temp->next!=NULL)
{
    if(mpp[temp]==true)
    return true; 
    else {
        mpp[temp]=true;
        temp=temp->next;
    }
    return false;
}

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
Node* head=new Node(10);
print(head);
insertAtTail(head,12);
print(head);
insertAtTail(head,22);
print(head);
insertAtTail(head,26);
print(head);
insertAtTail(head,27);
print(head);
insertAtTail(head,28);
print(head);

cout<<detectLoop(head);

    return 0;
}