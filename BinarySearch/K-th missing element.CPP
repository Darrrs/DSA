#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo=1,hi=1e4;
        int maxi=*max_element(arr.begin(),arr.end());
       // while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int temp=0,j=0;
            for(int i=1;i<arr.size()+k+1;i++){
                if(j<arr.size() and i==arr[j]){
                    j++;
                    continue;
                } 
                else temp++;
                if(temp==k) return  i;
            }
       // }
        return -1;
    }
};

//https://leetcode.com/problems/kth-missing-positive-number/
//https://www.geeksforgeeks.org/problems/k-th-missing-element3635/1