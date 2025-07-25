
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1=headA,*ptr2=headB;
        while(ptr1!=ptr2){
            if(ptr1==NULL) {
                ptr1=headB;
            }else ptr1=ptr1->next;
            if(ptr2==NULL){
                ptr2=headA;
            }else ptr2=ptr2->next;

        }
        return ptr1;

    }
};
//https://leetcode.com/problems/intersection-of-two-linked-lists/