#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int k, vector<int> &arr) {
        // code here
        int floor=INT_MAX, ceil=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k)floor=min(floor,arr[i]);
            else if(arr[i]<k) ceil=max(ceil,arr[i]);
            else{
                floor=ceil=arr[i];
            }
        }
        if(floor==INT_MAX ) floor=-1;
        if(ceil==INT_MIN) ceil=-1;
        return {ceil,floor};
    }


    
};

//https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1