#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

Node* insertAtTail(Node* &head2,int data)
{ 
  if(head2==NULL)
  {
    Node* newnode=new Node(data);
    head2=newnode;
  }
  else{
    Node* temp=head2;
    Node* newnode=new Node(data);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    temp=newnode;
  }
  return head2;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
int n=0;
Node* temp=head;
while(temp!=NULL)
{
    n=n*10+temp->data;
    temp=temp->next;
}
n=n+1;
// cout<<n<<endl;
Node* head2=NULL;
while(n!=0)
{
    int digit=n%10;
    // cout<<digit<<endl;
Node* inserted=insertAtTail(head2,digit);
cout<<inserted->data<<" ";
    n=n/10;
}

return head2;

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


Node* newhead=addOne(head);
print(newhead);


    return 0;
}