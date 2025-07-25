class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head=new Node(arr[0]);
        Node* curr=head;
        for(int i=1;i<arr.size();i++){
            Node* temp=new Node(arr[i]);
            curr->next=temp;
            temp->prev=curr;
            curr=curr->next;
        }
        return head;
    }
};
//https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1
