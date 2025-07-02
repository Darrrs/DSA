class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return newloop(head,NULL);
    }
    ListNode* newloop(ListNode* head, ListNode* newhead){
        if(head==NULL) return newhead;

        ListNode* front=head->next;
        head->next=newhead;
        return newloop(front,head);
    }
};
//https://leetcode.com/problems/reverse-linked-list/