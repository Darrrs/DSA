#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int lo=0,hi=n-1;
        int mini=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            mini=min(mini, arr[mid]);
            //left
            if(arr[lo]<=arr[mid]){
                if(arr[lo]<=arr[mid] and arr[mid]<=arr[hi]) hi=mid-1;
                else lo=mid+1;
            }
            //right
            else {
                if(arr[lo]<=arr[mid] and arr[mid]<=arr[hi]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return mini;
    }
};

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
//https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1