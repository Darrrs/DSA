#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1, hi=*max_element(nums.begin(),nums.end());
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int ans=0;
            for(int num:nums){
                ans+=ceil((double)num/(double)mid);
            }
            if(ans>threshold) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
        
    }
};

//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
//https://www.geeksforgeeks.org/problems/smallest-divisor/1c    