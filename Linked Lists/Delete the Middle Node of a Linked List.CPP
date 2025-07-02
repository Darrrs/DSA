class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev=NULL, *slow=head, *fast=head;
        if(head->next==NULL) return NULL;
        while(fast and fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;

    }
};
//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/