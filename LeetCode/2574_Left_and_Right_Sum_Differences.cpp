
// 25 Feb 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int leftsum = 0;
        int sum = 0;
     

        for(int i = 0; i < nums.size();i++)
        {
            sum += nums[i];
        }

        for(int i = 0 ; i <nums.size(); i++)
        {
            sum -= nums[i];
            int k = abs(leftsum - sum);
            leftsum += nums[i];
          
            nums[i] = k;
        }

        return nums;
    }
};