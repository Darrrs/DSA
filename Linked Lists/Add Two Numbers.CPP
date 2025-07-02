
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=l1,*curr2=l2,*start=new ListNode(1);
        ListNode* curr3=start;
        int carry=0;
        while(curr1 and curr2){
            int sum=curr1->val+curr2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* newnode=new ListNode(sum);
            curr3->next=newnode;
            curr1=curr1->next;
            curr2=curr2->next;
            prev=curr3;
            curr3=curr3->next;
        }
        //if(curr1)cout<<curr1->val<<" ";
        while(curr1){
            int sum=curr1->val+carry;
           // cout<<sum<<" ";
            carry=sum/10;
            sum=sum%10;
            ListNode* newnode=new ListNode(sum);
            curr3->next=newnode;
            curr1=curr1->next;
            prev=curr3;
            curr3=curr3->next;            
        }
        while(curr2){
            int sum=curr2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* newnode=new ListNode(sum);
            curr3->next=newnode;
            curr2=curr2->next;
            prev=curr3;
            curr3=curr3->next;
        }
        if(carry){
            ListNode* newnode=new ListNode(carry);
            curr3->next=newnode;
        }
        return start->next;
    }
};
//https://leetcode.com/problems/add-two-numbers/description/