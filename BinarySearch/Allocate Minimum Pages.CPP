#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int lo=*max_element(arr.begin(),arr.end()),hi=0;
        if(arr.size()<k) return -1;
        for(int num:arr) hi+=num;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int alloc=0,stu=0;
            
            for(int num:arr){
                alloc+=num;
                if(alloc==mid){
                    stu++;
                    alloc=0;
                    continue;
                } else if(alloc>mid){
                    stu++;
                    alloc=num;
                    continue;
                }
            }
            stu+=ceil((double)(alloc)/(double)(mid));
            if(stu>k) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }
};