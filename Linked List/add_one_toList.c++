Node *reverse(Node* head){
   Node* prev = NULL;
   Node* curr = head;

   while(curr != NULL){
       Node *temp = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr = temp;

   }
   return prev;
}
Node *addOne(Node *head)
{
   // Write Your Code Here.
   head = reverse(head);
   Node* temp = head;
   int carry = 1;

   while( carry  != 0){
       int sum = temp -> data + carry;
       carry = sum >=10 ? 1 : 0;
       
       if( carry == 1 && temp -> next == NULL){
           temp -> data = 0;
           Node* newNode = new Node(1);
           temp -> next   = newNode;
           break;

       }
       else if(carry == 1){
           temp -> data = 0;
       }
       else if(carry == 0){
           temp -> data = sum;

       }
       temp = temp -> next;
   }
   head = reverse(head);
   return head;
}
 