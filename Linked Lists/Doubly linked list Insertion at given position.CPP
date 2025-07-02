// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* curr=head;
        while(curr!=NULL){
            if(pos==0){
                Node* temp= new Node(data);
                if(curr->next!=NULL){
                    
                    temp->next=curr->next;
                    temp->prev=curr;
                    curr->next=temp;
                    temp->next->prev=temp;
                }else{
                    curr->next=temp;
                    temp->prev=curr;
                    
                }
                break;
            }
            pos--;
            curr=curr->next;
        }
        return head;
    }
};