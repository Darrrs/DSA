#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &temp, int k) {

        // Write your code here
        vector<int> stalls=temp;
        sort(stalls.begin(),stalls.end());
        int lo=1,hi=(*max_element(stalls.begin(),stalls.end())-*min_element(stalls.begin(),stalls.end()));
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int tempcow=0,last=-1;
            for(int i=0;i<stalls.size();i++){
                if(i==0){
                    tempcow++;
                    last=0;
                    continue;
                }
                else{
                    if((stalls[i]-stalls[last])>=mid){
                        tempcow++;
                        last=i;
                    }
                }
            }
            if(tempcow>=k) lo=mid+1;
            else hi=mid-1;
        }
        return hi;
    }
};