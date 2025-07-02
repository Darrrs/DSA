class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node* curr=head;
        while(curr!=NULL){
            if(curr->data==key) return 1;
            else curr=curr->next;
        }
        return 0;
    }
};
//https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1