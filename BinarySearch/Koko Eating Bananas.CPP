#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kokoEat(vector<int>& piles, int h) {
        // Code here
        int lo=1;
        int hi=*max_element(piles.begin(),piles.end());
        
        
        int ans=hi;
        while(lo<=hi){
            int mid= lo+(hi-lo)/2;
            long long k=0;
            for(int i=0;i<piles.size();i++){
                k += ceil((double)(piles[i]) / (double)(mid));
            }
            if(k<=h){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};

//https://www.geeksforgeeks.org/problems/koko-eating-bananas/1
//https://leetcode.com/problems/koko-eating-bananas/description/