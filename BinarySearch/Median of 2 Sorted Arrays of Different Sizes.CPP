#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int> temp(n+m,0);
        int lo1=0,lo2=0,ct=0;
        while(lo1<n and lo2<m){
            if(nums1[lo1]<nums2[lo2]){
                temp[ct]=nums1[lo1];
                lo1++;
            }
            else{
                temp[ct]=nums2[lo2];
                lo2++;
            } 
            ct++;
        }
        if(lo1<n){
            for(int i=lo1;i<n;i++){
                temp[ct]=nums1[i];
                ct++;
            }
        }
        if(lo2<m){
            for(int i=lo2;i<m;i++){
                temp[ct]=nums2[i];
                ct++;
            }
        }
        int hi=n+m-1;
        //return hi;
        for(int num:temp) cout<<num;
        if(hi%2==0) return temp[hi/2];
        //if((n+m)%2) return temp[mid];
        int mid=hi/2;
        double res=(((double)(temp[mid]+temp[mid+1]))/(double)(2));
        return res ;
    }
};

//https://leetcode.com/problems/median-of-two-sorted-arrays/
//https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1