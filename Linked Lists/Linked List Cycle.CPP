class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slo=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slo=slo->next;
            fast=fast->next->next;
            if(slo==fast) return true;
        }
        return false;
    }
};
//https://leetcode.com/problems/linked-list-cycle/