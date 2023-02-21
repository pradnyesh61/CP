// 20 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        int i = 0;
        if(n == 1)
        {
            return nums[0];
        } 
        while(i < n)
        {
            if(nums[i] == nums[i+1])
            {
                i += 2;
            }
            else{
                break;
            }
        }

        return nums[i];
    }
};