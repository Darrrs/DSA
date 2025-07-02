#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        int n=arr.size();
        Node* dummy= new Node(0);
        Node* curr=new Node(arr[0]);
        dummy->next=curr;
        for(int i=1;i<n;i++){
            curr->next=new Node(arr[i]);
            curr=curr->next;
        }
        curr->next=NULL;
        return dummy->next;
    }
};

//https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1