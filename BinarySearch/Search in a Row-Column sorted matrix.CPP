#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int lo = 0, hi = n * m - 1;
        while (lo<=hi) {
            int mid=(lo+hi)/2;
            int row=mid/m,col=(mid % m);
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return false;
    }
};