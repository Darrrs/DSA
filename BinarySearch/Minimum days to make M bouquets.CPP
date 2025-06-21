#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int lo=*min_element(nums.begin(),nums.end()),hi=*max_element(nums.begin(),nums.end());
        long long val=m*1ll*k*1ll;
        if(nums.size()<val) return -1;
        while(lo<=hi) {
            int mid=lo+(hi-lo)/2;
            int f=0,bouq=0,adj=0;

            for(int num: nums){
                if(num<=mid and adj<=k){
                    adj++;
                }
                else if(num>mid) adj=0;
                
                if(adj>=k) {
                    bouq++;
                    adj=0;
                }
            }

            if(bouq<m) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
        
    }
};

//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

//https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1