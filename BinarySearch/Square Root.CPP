// User function Template for C++
#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int lo=0,hi=n;
        int ans=INT_MIN;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid*mid<=n){
                ans=max(mid,ans);
                lo=mid+1;
            }else hi=mid-1;
            
        }
        return ans;
    }
};

//https://www.geeksforgeeks.org/problems/square-root/1