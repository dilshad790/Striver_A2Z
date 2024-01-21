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
Node *findMid(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *mergeTwoSortedList(Node *first, Node *second)
{
    Node *curr1 = first;
    Node *next1 = first->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;

    if (curr1->next == NULL)
    {
        curr1->next = curr2;
        return first;
        while (next1 != NULL && curr2 != NULL)
        {
            if (curr2->data >= curr1->data && curr2->data <= curr1->data)
            {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                curr1 = curr2;
                curr2 = next2;
            }
            else
            {
                curr1 = next1;
                next1 = next1->next;
            }

            // if sencond list exausted
            if (curr1->next == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
        return first;
}
    Node *sortList(Node * head)
    {
        // Write your code here.
        if (head == NULL || head->next == NULL)
            return head;
        Node *mid = findMid(head);

        Node *left = head;
        Node *right = mid + 1;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);
        Node *result = mergeTwoSortedList(left, right);

        return result;
    }

    void print(Node * &head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int main()
    {
        // Your code here

        Node *node1 = new Node(6);
        Node *head = node1;
        Node *node2 = new Node(5);
        node1->next = node2;
        Node *node3 = new Node(3);
        node2->next = node3;
        Node *node4 = new Node(4);
        node3->next = node4;
        Node *node5 = new Node(7);
        node4->next = node5;
        Node *node6 = new Node(1);
        node5->next = node6;
        Node *node7 = new Node(2);
        node6->next = node7;

        print(head);

        sortList(head);
        print(head);

        return 0;
    }