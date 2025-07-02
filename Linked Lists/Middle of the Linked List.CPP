class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slo=head,*fast=head;
        while(fast->next!=NULL){
            slo=slo->next;
            if(fast->next!=NULL){
                fast=fast->next;
                if(fast->next!=NULL){
                    fast=fast->next;
                }else break;
            }else break;
        }
        return slo;
    }
};
//https://leetcode.com/problems/middle-of-the-linked-list/