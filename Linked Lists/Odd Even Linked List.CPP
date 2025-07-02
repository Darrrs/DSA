
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int ct=1;
        if(head==NULL) return head;
        ListNode* even_start=head->next;
        ListNode* even=head->next;
        ListNode* odd=head;
        while(odd->next and even->next){
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;

        }
        odd->next=even_start;
        return head;
    }
};
//https://leetcode.com/problems/odd-even-linked-list/