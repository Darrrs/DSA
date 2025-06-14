#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int n=arr.size();
        int lo=0, hi=n-1, ans=-1;
        while(lo>=0 and hi<n and lo<=hi){
            int mid=(lo+hi)>>1;
            if(arr[mid]<=x)
            {
                ans = mid;
                lo=mid+1;
            }
            else hi=mid-1;
            
            
        }
        return ans;
    }
};

//https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1