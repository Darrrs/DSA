
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slo=head,*fast=head;
        while(fast and fast->next){
            slo=slo->next;
            fast=fast->next->next;
        }
        ListNode* prev=slo;
        slo=slo->next;
        prev->next = NULL;
        while(slo){
            ListNode* temp=slo->next;
            slo->next=prev;
            prev=slo;
            slo=temp;
        }
        fast=head;
        slo=prev;
        while(slo){
            if(slo->val!=fast->val) return false;
            else {
                slo=slo->next;
                fast=fast->next;
            }
        }
        return true;
    }
};
//https://leetcode.com/problems/palindrome-linked-list/