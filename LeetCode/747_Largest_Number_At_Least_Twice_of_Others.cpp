
// 29 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        
        int n = nums.size();
        int l = max_element(nums.begin(),nums.end())-nums.begin();


        for(int i = 0; i < n;i++)
        {
            
            if(i != l && nums[i]*2 > nums[l])
            {
                return -1;
            }
        }

        return l;
    }
};