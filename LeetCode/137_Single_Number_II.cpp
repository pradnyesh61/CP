// 4 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int n = nums.size();

        for(int i =0 ; i< n ;i++)
        {
            if(i+2 < n && nums[i] == nums[i+2])
            {
                i = i+2;
            }
            else
            return nums[i];
        }

        return nums[n-1];
    }
};