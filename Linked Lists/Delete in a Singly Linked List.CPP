
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        int i=1;
        Node * curr=head;
        //if(curr->next->next=NULL and x==1)  return NULL;
        Node* prev=NULL;
        while(curr!=NULL){
            
            if(i==x){
                if(curr->next!=NULL){
                    curr->data=curr->next->data;
                    curr->next=curr->next->next;
                }
                else {
                    prev->next=NULL;
                }
                break;
            }
            prev=curr;
            curr=curr->next;
            i++;
        }
        //if(curr==NULL and i==x) prev->next=NULL;
        return head;
    }
};

//https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1