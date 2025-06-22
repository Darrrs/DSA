// User function Template for C++
#include<bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    int minTime(vector<int>& nums, int k) {
        // code here
        
        // return minimum time
        int lo=*max_element(nums.begin(),nums.end()),hi=0;
        for(int num:nums) hi+=num;
        if(nums.size()==1) return nums[0];
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int sum=0,ct=0;

            for(int num:nums){
                sum+=num;
                if(sum==mid){
                    sum=0;
                    ct++;
                    continue;
                }else if(sum>mid){
                    sum=num;
                    ct++;
                }
            }
            ct+=ceil((double)(sum)/(double)(mid));
            if(ct>k) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }
};

//https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1