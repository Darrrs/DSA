#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
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
        if(!f) return 0;
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
        return hi-lo+1;
    }
};

//https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1