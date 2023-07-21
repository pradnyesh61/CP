// 21 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxi = INT_MIN;
    int count = 0;

    void longsub(int i, vector<int> temp, vector<int> &nums, int sum)
    {

        int n = temp.size();

        if (i == nums.size())
        {
            if (n >= maxi)
            {
                if (n == maxi)
                {
                    count++;
                }
                else
                {
                    count = 1;
                    maxi = n;
                }
            }
            return;
        }

        if (n == 0 || n > 0 && temp[n - 1] < nums[i])
        {
            temp.push_back(nums[i]);
            longsub(i + 1, temp, nums, nums[i]);
            temp.pop_back();
        }

        longsub(i + 1, temp, nums, sum);
    }

    void memoization(int i, vector<int> temp, vector<int> &nums, int sum, vector<int> &dp)
    {

        int n = temp.size();

        if (i == nums.size())
        {
            if (n >= maxi)
            {
                if (n == maxi)
                {
                    count++;
                }
                else
                {
                    count = 1;
                    maxi = n;
                }
            }
            dp[i] = count;
            return;
        }

        if (dp[i] != -1)
        {
            dp[i];
        }

        if (n == 0 || n > 0 && temp[n - 1] < nums[i])
        {
            temp.push_back(nums[i]);
            memoization(i + 1, temp, nums, nums[i], dp);
            temp.pop_back();
        }

        memoization(i + 1, temp, nums, sum, dp);
    }

    int findNumberOfLISq(vector<int> &nums)
    {

        vector<int> temp;
        // longsub(0,temp,nums,0);
        vector<int> dp(nums.size() + 1, -1);
        memoization(0, temp, nums, 0, dp);
        return count;
    }

    int findNumberOfLIS(std::vector<int> &nums)
    {
        int n = nums.size();
        vector<int> length(n, 1);
        vector<int> count(n, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    if (length[j] + 1 > length[i])
                    {
                        length[i] = length[j] + 1;
                        count[i] = 0;
                    }
                    if (length[j] + 1 == length[i])
                    {
                        count[i] += count[j];
                    }
                }
            }
        }

        int maxLength = *max_element(length.begin(), length.end());
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            if (length[i] == maxLength)
            {
                result += count[i];
            }
        }

        return result;
    }
};