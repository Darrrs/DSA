#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(nums[mid]==target) return true;
            if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
                lo = lo + 1;
                hi = hi - 1;
                continue;
            }
            if(nums[mid]<=nums[hi] ){
                if( nums[mid]<=target and target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
            else {
                if(nums[lo]<=target and target<=nums[mid] ) hi=mid-1;
                else lo=mid+1;
            }
            
        }
        return false;
    }
};

//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
//https://www.geeksforgeeks.org/problems/search-in-rotated-array-2/1