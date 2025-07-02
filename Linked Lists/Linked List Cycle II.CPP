class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slo=head;
        ListNode* fast=head, *entry=head;
        while(fast!=NULL and fast->next!=NULL){
            slo=slo->next;
            fast=fast->next->next;
            if(slo==fast){
                while(slo!=entry){
                    slo=slo->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return  NULL;
    }
};
//https://leetcode.com/problems/linked-list-cycle-ii/