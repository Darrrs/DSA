class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int ct=0;
        if(head==NULL) return 0;
        while(head!=NULL){
            ct++;
            head=head->next;
        }
        return ct;
    }
};
//https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1