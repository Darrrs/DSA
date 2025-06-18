#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int ans=-1;
        int lo=0,hi=m;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
            if(pow(mid,n)==m) return mid;
            else if(pow(mid,n)<m) lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};

//https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1