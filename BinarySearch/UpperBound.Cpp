// User function Template for C++
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int lo=0,hi=n-1, ans=n;
        while(lo<=hi and lo>=0 and hi<n){
            int mid=lo+(hi-lo)/2;
            if(target<arr[mid]) {
                hi=mid-1;
                ans=mid;
            }
            else if(target==arr[mid]) lo=mid+1;
            
            else lo=mid+1;
            
        }
        return ans;
    }
};
//https://www.geeksforgeeks.org/implementing-upper_bound-and-lower_bound-in-c/