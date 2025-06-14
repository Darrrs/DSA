#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=1;i<n;i++){
            int j=i;
            while(j>0 and arr[j]<arr[j-1]) {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
};

//https://www.geeksforgeeks.org/problems/insertion-sort/1