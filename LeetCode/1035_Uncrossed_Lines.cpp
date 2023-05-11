// 11 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(int i, int j, vector<int> &nums1, vector<int> &nums2)
    {
        if (i == nums1.size() || j == nums2.size())
        {
            return 0;
        }

        if (nums1[i] == nums2[j])
        {
            return 1 + recursion(i + 1, j + 1, nums1, nums2);
        }

        return max(recursion(i + 1, j, nums1, nums2), recursion(i, j + 1, nums1, nums2));
    }

    int memoization(int i, int j, vector<int> &nums1, vector<int> &nums2, vector<vector<int>> &dp)
    {
        if (i == nums1.size() || j == nums2.size())
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (nums1[i] == nums2[j])
        {
            return dp[i][j] = 1 + memoization(i + 1, j + 1, nums1, nums2, dp);
        }

        return dp[i][j] = max(memoization(i + 1, j, nums1, nums2, dp),
                              memoization(i, j + 1, nums1, nums2, dp));
    }

    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
    {

        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), -1));
        // return recursion(0,0,nums1,nums2);
        return memoization(0, 0, nums1, nums2, dp);
    }
};