#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int min=0;
        for (int i=0;i<arr.size();i++){
            min=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[min]) min=j;
            }
            if(arr[min]<arr[i])swap(arr[min],arr[i]);
        }
    }
};

//https://www.geeksforgeeks.org/problems/selection-sort/1
