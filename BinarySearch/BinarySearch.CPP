#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int lo=0, hi=arr.size()-1, ans=-1;
        while(lo>=0 and hi<=arr.size()-1 and lo<=hi){
            int mid=(lo+hi)>>1;
            if(k==arr[mid]){
                 ans= mid;
                 hi=mid-1;
            } 
            else if(k>arr[mid]) lo=mid+1;
            else hi=mid-1;
            
        }
        return ans;
        
    }
};

//https://www.geeksforgeeks.org/problems/binary-search-1587115620/1