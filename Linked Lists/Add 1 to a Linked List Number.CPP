

class Solution {
  public:
  
    Node* reverse(Node* head){
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        
        Node* prev=NULL,*curr=head;
        while(curr){
            Node* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
        
    }
    Node* addOne(Node* head) {
        // Your Code here
        Node* newhead=reverse(head);
        // return head of list after adding one
        Node* curr=newhead,*prev=NULL;
        int carry=1;
        while(curr){
            if(curr->data+carry>9){
                carry=((curr->data+carry)/10);
                curr->data=(curr->data+carry)%10;
                prev=curr;
                //cout<<curr->data;
                curr=curr->next;
            }else{
                curr->data=curr->data+carry;
                carry=0;
                break;
            } 
        }
        if(carry){
            Node* newnode=new Node(carry);
            prev->next=newnode;
        }
        Node* reversehead=reverse(newhead);
        return reversehead;

        
    }
};
//https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1