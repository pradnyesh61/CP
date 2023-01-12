// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn)
// such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

// 12 jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int sum = 0;

        for(int i = 0 ; i < nums.size() ;i += 2)
            sum += min(nums[i],nums[i+1]);

        return sum;

    }
};

int main()
{
    Solution s;
    vector<int> v = {6,2,6,5,1,2};
    cout<<s.arrayPairSum(v);
}