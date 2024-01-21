#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
// STEP1
void insertAtHead(Node *&head, int data)
{
    Node *temp = head;
    Node *newnode = new Node(data);
    newnode->next = temp;
    temp->prev = newnode;
    head = newnode;
}
// STEP2
void insertAtTail(Node *head, int data)
{
    Node *temp = head;
    Node *newnode = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
}
// STEP3
void insertAtanyPosition(Node *&head, int data, int position)
{
    Node *temp = head;
    Node *newnode = new Node(data);
    int cnt = 1;
    if (position == 1)
        insertAtHead(head, data);
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
}
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head->next;
        head->next = NULL;
        head = temp;
    }
    else
    {
        Node *prev = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            prev = prev->next;
            cnt++;
        }
        Node *curr = prev->next;
        Node *next = curr->next;
        prev->next = next;
        next->prev = prev;
        curr->next = NULL;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    // Your code here
    Node *node = new Node(10);
    Node *head = node;
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 25);
    print(head);

    insertAtTail(head, 30);
    print(head);
    insertAtanyPosition(head, 17, 3);
    print(head);
    insertAtanyPosition(head, 40, 5);
    print(head);
    insertAtanyPosition(head, 40, 1);
    print(head);

    deleteNode(head, 1);
    print(head);

    cout << getlength(head);
    return 0;
}