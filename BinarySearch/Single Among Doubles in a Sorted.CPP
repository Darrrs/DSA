#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int n = arr.size(); //size of the array.

        //Edge cases:
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n - 1] != arr[n - 2]) return arr[n - 1];
    
        int low = 1, high = n - 2;
        while (low <= high) {
            int mid = (low + high) / 2;
    
            //if arr[mid] is the single element:
            if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
                return arr[mid];
            }
    
            //we are in the left:
            if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                    || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
                //eliminate the left half:
                low = mid + 1;
            }
            //we are in the right:
            else {
                //eliminate the right half:
                high = mid - 1;
            }
        }
    
        // dummy return statement:
        return -1;
    }
};

//https://www.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
//https://leetcode.com/problems/single-element-in-a-sorted-array/description/