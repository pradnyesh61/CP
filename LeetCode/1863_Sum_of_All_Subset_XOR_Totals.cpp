// 22 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subset(int i, int n, vector<int> &nums, int axor)
    {
        if (i >= n)
        {
            return axor;
        }

        axor ^= nums[i];
        return subset(i + 1, n, nums, axor) + subset(i + 1, n, nums, axor ^ nums[i]);
    }

    int subsetXORSum(vector<int> &nums)
    {

        return subset(0, nums.size(), nums, 0);
    }
};