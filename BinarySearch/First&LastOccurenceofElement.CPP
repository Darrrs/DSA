#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(), lo=0,f=0;
        int hi=n-1,mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(target==nums[mid]){
                lo=mid;
                hi=mid;
                f=1;
                break;
            }
            else if (target<nums[mid]) hi=mid-1;
            else lo=mid+1;
        }
        if(!f) return {-1,-1};
        int lo1=0,hi1=mid;
        while(lo1<=hi1){
            int mid1=lo1+(hi1-lo1)/2;
            if(target==nums[mid1]) {
                lo=mid1;
                hi1=mid1-1;
            }
            else if(target>nums[mid1]) lo1=mid1+1;
            else break;
        }
        int lo2=mid,hi2=n-1;
        while(lo2<=hi2){
            int mid2=lo2+(hi2-lo2)/2;
            if(target==nums[mid2]) {
                hi=mid2;
                lo2=mid2+1;
            }
            else if(target<nums[mid2]) hi2=mid2-1;
            else break;
        }
        return {lo,hi};
    }
};

//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1