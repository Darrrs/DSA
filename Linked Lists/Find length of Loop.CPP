*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slo=head, *fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slo=slo->next;
            fast=fast->next->next;
            if(slo==fast){
                int ct=1;
                slo=slo->next;
                while(slo!=fast){
                    slo=slo->next;
                    ct++;
                }
                return ct;
            }
        }
        return 0;
    }
};
//https://www.geeksforgeeks.org/problems/find-length-of-loop/1