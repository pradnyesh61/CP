// 20 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {

        int sq = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (n % (i + 1) == 0)
            {
                sq += (nums[i] * nums[i]);
            }
        }

        return sq;
    }
};