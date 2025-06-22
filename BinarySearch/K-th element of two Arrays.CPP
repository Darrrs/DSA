#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n=a.size(),m=b.size();
        vector<int> temp(n+m,0);
        int lo1=0,lo2=0,ct=0;
        while(lo1<n and lo2<m){
            if(a[lo1]<b[lo2]){
                temp[ct]=a[lo1];
                lo1++;
            }else {
                temp[ct]=b[lo2];
                lo2++;
            }
            ct++;
        }
        if(lo1<n){
            for(int i=lo1;i<n;i++){
                temp[ct]=a[i];
                ct++;
            }
        }
        if(lo2<m){
            for(int i=lo2;i<m;i++){
                temp[ct]=b[i];
                ct++;
            }
        }
        //for(int num:temp) cout<<num<<endl;

        return temp[k-1];
    }
};