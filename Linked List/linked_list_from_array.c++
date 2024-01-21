#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int data)
    {  this->prev=NULL;
        this->data=data;
        this->next=NULL;
    }
};
Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* temp=new Node();
    Node* head=temp;
    for(int i=0; i<arr.size(); i++)
    {
        temp->data=arr[i];
        if(i<(arr.size()-1))
        {
            temp->next=new Node();
            temp=temp->next;
        }
    }
    return head;
}
void print(Node* &head)
{ 
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}

int main() {
    // Your code here
    vector<int>v{1,2,3,4};
    
constructLL(v);
print()
    return 0;
}