// 13 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int ind = 0 ;

        for(int i = 0; i < nums.size();i++)
        {
            if(maxi < nums[i])
            {
                maxi = nums[i];
                ind = i;
            }
        }

        return ind;
    }
};