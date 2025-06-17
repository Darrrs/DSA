#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        int lo=0,hi=n-1;
        if(n==1) return 0;
        while(lo<=hi){
            int mid= lo+(hi-lo)/2;

            if(mid-1<0) {
                if(arr[mid]>arr[mid+1]) return mid;
                else lo=mid+1;
            }else if(mid+1==n){
                if(arr[mid]>arr[mid-1]) return mid;
                else hi=mid-1;
            }else{
                if(arr[mid-1]<arr[mid] and arr[mid]>arr[mid+1]) return mid;
                else if(arr[mid-1]<arr[mid] and arr[mid]<arr[mid+1])lo=mid+1;
                else hi=mid-1;
            }
        
        }
        return -1;
    }
};

//https://www.geeksforgeeks.org/problems/peak-element/1
//https://leetcode.com/problems/find-peak-element/description/