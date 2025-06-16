#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int lo=0,hi=n-1,ans=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(target==arr[mid]) return mid;
            else if(target>arr[mid]) lo=mid+1;
            else {
                ans=mid;
                hi=mid-1;
            }
        }
        return ans;

        
    }
};
//https://leetcode.com/problems/search-insert-position/
//https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1