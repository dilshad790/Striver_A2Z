#include <iostream>
using namespace std;
class Node{ public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
int countNode(Node* &head)
{
    Node* temp=head;
    int cnt=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
Node* getmiddle(Node* &head)
{  int cnt=countNode(head);
if(cnt%2==0){
    
    Node* slow=head;
    Node* fast=head;
    while(fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->next;
}
else{
   Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow; 
  }
}
Node* reverse(Node* &middle)
{
    Node* prev=NULL;
    Node* curr=middle;
    Node* nextptr;
    while(curr!=NULL)
    { 
        nextptr=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=nextptr;
        
    }
    return prev;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";

        temp=temp->next;
    }
    cout<<endl;
}
bool isPalindrome(Node *&head)
{
    // write your code here
    Node* middle=getmiddle(head);
cout<<"middle:"<<middle->data<<endl;
    Node* rev=reverse(middle);
cout<<"rev:"<<rev->data<<endl;
    Node* temp=head;
    while(rev!=NULL)
    { if(temp->data!=rev->data)
    return false;
    
        temp=temp->next;
        rev=rev->next;
    }
    return true;
}
int main() {
    // Your code here

    Node *node1 = new Node(1);
    Node* head=node1;
    Node *node2 = new Node(2);
    node1->next=node2;
    Node *node3 = new Node(2);
    node2->next=node3;
    Node *node4 = new Node(1);
    node3->next=node4;
// print(head);
// cout<<countNode(head)<<endl;
// Node* middle=getmiddle(head);
// cout<<middle->data<<endl;

// Node* rev=reverse(middle);
// print(rev);

cout<<isPalindrome(head)<<endl;
    return 0;
}