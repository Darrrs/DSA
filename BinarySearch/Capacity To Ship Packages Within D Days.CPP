#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=*max_element(weights.begin(),weights.end()),hi=0;
        for(int num:weights) hi+=num;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            int temp=0,tempday=0;
            for(int num:weights){
                temp+=num;

                if(temp==mid){
                    tempday+=1;
                    temp=0;
                } else if(temp>mid){
                    tempday+=1;
                    temp=num;
                }

            }
            tempday+=ceil((double)temp/(double)mid);

            if(tempday>days) lo=mid+1;
            else hi=mid-1;

        }
        return lo;
    }
};

//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
//https://www.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1