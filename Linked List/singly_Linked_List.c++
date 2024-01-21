#include<iostream>
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
    void insertAtHead(Node* &head,int data)
    {
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    void print(Node* &head )
    {
        Node* temp=head;
        while(temp!=0)
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
    void insertAtTail(Node* &tail,int data)
    {
        Node*temp=new Node(data);
        tail->next=temp;
        temp=temp->next;

    }
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    // jahan pr add krna h uske phle wala node pr pahucho 
    int cnt=1;
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }
    
    Node* temp=head;
    while(cnt<position)
    {
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    // new node created
    Node* newnode=new Node(data);
    newnode->next=temp->next;// new node ka next uske aage wala next se jodo
    temp->next=newnode;// previous node h usko new node ko point krwana
}
void deletion(Node* &head,int position)
{
    if(position==1)
    {
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        
    }
    // deleting any middle node or last node
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        delete curr;
    }
}
int main()
{// created a node
    Node* node1=new Node(10);
   // cout<<head->data<<endl;
    //cout<<head->next;
Node* head=node1;
Node* tail=node1;

print(head);

insertAtHead(head,12);
insertAtHead(head,20);
print(head);

insertAtTail(tail,25);
print(head);

insertAtPosition(head,tail,4,30);
print(head);

deletion(head,3);
print(head);

    
 return 0;
}