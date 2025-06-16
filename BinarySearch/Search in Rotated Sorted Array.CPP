#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& nums, int target) {
        // Code Here
        int n=nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(nums[mid]==target) return mid;
            if(nums[mid]<=nums[hi] ){
                if( nums[mid]<=target and target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
            else {
                if(nums[lo]<=target and target<=nums[mid] ) hi=mid-1;
                else lo=mid+1;
            }
            
        }
        return -1;
    }
};

//https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
//https://leetcode.com/problems/search-in-rotated-sorted-array/