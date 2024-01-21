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
void insertList(Node* &tail, int element, int data)
{ // Empty List
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {  
            temp = temp->next;
        }
        Node *newnode = new Node(data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void print(Node* tail)
{
    Node* temp=tail;
    // Single Node hoga to print ni kr paenge
    // while(tail->next!=temp){
    //     cout<<tail->data;
    //     tail=tail->next;
    // }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
int main()
{
    // Your code here
    Node* tail=NULL; 
    insertList(tail,10,21); // 10 khojo kr lao and uske aage 21 daal do
print(tail);
    insertList(tail,21,25); // 21 khojo aur uske aage 25 daal do
print(tail);
    insertList(tail,25,30);   // 25 ko khojo aur uske aage 30 daal do
print(tail);
    insertList(tail,21,33);  // 21 ko khojo and uske aage 33 dal do
print(tail);

    return 0;
}