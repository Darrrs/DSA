#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            int k=0;
            for(int j=k+1;j<=i;j++){
                if(arr[k]>arr[j]) swap(arr[j],arr[k]);
                k++;
            }
            
        }
    }
};



//https://www.geeksforgeeks.org/problems/bubble-sort/1