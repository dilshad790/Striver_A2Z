 #include <iostream>
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

 Node* reverse(Node* head2)
    {
        Node* prevptr=NULL;
    Node* currptr=head2;
    Node* nextptr;
    
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        
        currptr->next=prevptr;
        prevptr=currptr;
        
        currptr=nextptr;
    }
        return prevptr;
    }
    
    int countNode(Node* head)
    {
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL)
        { 
            cout<<"count ka value pahle:"<<cnt<<" "<<temp->data<<endl;
            temp=temp->next;
    
            cnt++;

            cout<<"Count ka value baad me"<<cnt<<" "<<temp->data<<endl;
        }
        return cnt;
    }
    void rearrange(struct Node *odd)
    {
        // add code here
        if(odd->next==NULL)
        return;
        int count=countNode(odd);
        // cout<<" count="<<count<<endl;
        Node* head1=odd;
        Node* temp1=head1;
        
        Node* head2=odd->next;
        Node* temp2=head2;
        
        while(temp1->next!=NULL && temp2->next!=NULL)
        {
            temp1->next=temp2->next;
            temp1=temp2->next;
            
            cout<<"temp2 ka data:"<<temp2->data<<endl;
            if(temp1->next==NULL)
            break;
            temp2->next=temp1->next;
            temp2=temp1->next;
            
            
        }
        
    //    cout<<"odd hu loop se bahar aagaya:"<<temp2->data<<endl;
       
       if(count%2==0)
       {  
       temp1->next=NULL;
    // //    cout<<"even hu loop se bahar aagaya:"<<temp1->data<<endl;
       }
       else
       {
       cout<<"count"<<count<<endl;

        temp2->next=NULL;
       }
       
        head2= reverse(head2);
        cout<<head2->data<<endl;
       temp1=head1;
       while(temp1->next!=NULL)
       {
           temp1=temp1->next;
       }
       
       temp1->next=head2;
        
        
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
Node *node1 = new Node(8);
    Node* head=node1;
    Node *node2 = new Node(8);
    node1->next=node2;
    Node *node3 = new Node(9);
    node2->next=node3;
    Node *node4 = new Node(4);
    node3->next=node4;
    Node *node5 = new Node(9);
    node4->next=node5;
    Node *node6 = new Node(7);
    node5->next=node6;
    Node *node7 = new Node(9);
    node6->next=node7;
    Node *node8 = new Node(6);
    node7->next=node8;
    Node *node9 = new Node(7);
    node8->next=node9;
//  10->4->9->1->3->5->9->4
// 8 8 9 4 9 7 9 6 7
rearrange(head);
print(head);     


     return 0;
 }