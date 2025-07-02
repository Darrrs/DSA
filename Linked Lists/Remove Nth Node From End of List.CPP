
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int ct=0;
        ListNode* curr=head;
        while(curr){
            ct++;
            curr=curr->next;
        }
        int ct2=0;
        ListNode* curr2=head;
        if(ct==1) return NULL;
        if(ct-n==0) return head->next;

        while(curr2){
            ct2++;
            if(ct-n==ct2){
                if(curr2->next)curr2->next=curr2->next->next;
            }
            curr2=curr2->next;
        }
        return head;

    }
};
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/