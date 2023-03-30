// 30 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool recursion(int i, vector<int> &nums, int totalSum, int sum)
    {

        if (i == 0)
        {
            sum += nums[i];
            if (totalSum - (sum + sum) == 0)
            {
                return true;
            }

            return false;
        }

        bool notTake = recursion(i - 1, nums, totalSum, sum);

        bool take = recursion(i - 1, nums, totalSum, sum + nums[i]);

        return (notTake || take);
    }

    int memoization(int i, vector<int> &nums, int totalSum, int sum, vector<vector<int>> &dp)
    {

        if (i == 0)
        {
            sum += nums[i];
            if (totalSum - (sum + sum) == 0)
            {
                return 1;
            }

            return 0;
        }

        if (dp[i][sum] != -1)
        {
            return dp[i][sum];
        }

        bool notTake = memoization(i - 1, nums, totalSum, sum, dp);

        bool take = memoization(i - 1, nums, totalSum, sum + nums[i], dp);

        return dp[i][sum] = (notTake || take);
    }

    bool memoization1(int i, vector<int> &nums, int totalSum, vector<vector<int>> &dp)
    {
        if (totalSum == 0)
        {
            return true;
        }

        if (i == 0)
        {
            return (totalSum == nums[0]);
            // another way to write below code
            // if(totalSum == nums[0])
            // {
            //     return 1;
            // }

            // return 0;
        }

        if (dp[i][totalSum] != -1)
        {
            return dp[i][totalSum];
        }

        bool notTake = memoization1(i - 1, nums, totalSum, dp);

        bool take = false;

        if (nums[i] <= totalSum)
            take = memoization1(i - 1, nums, totalSum - nums[i], dp);

        return dp[i][totalSum] = (notTake || take);
    }

    int tabulation(int m, int k, vector<int> &nums)
    {
        vector<vector<int>> dp(m, vector<int>(k + 1, 0));
        for (int i = 0; i < m; i++)
        {
            dp[i][0] = 1;
        }

        if (nums[0] <= k) // to check target value is less than value at index 0 then only we can have that subtraction as 0
            dp[0][nums[0]] = 1;

        for (int i = 1; i < m; i++)
        {
            for (int target = 1; target <= k; target++)
            {
                bool notTake = dp[i - 1][target];

                bool take = false;

                if (nums[i] <= target)
                    take = dp[i - 1][target - nums[i]];

                dp[i][target] = (notTake || take);
            }
        }

        return dp[m - 1][k];
    }

    int spaceOptimization(int m, int k, vector<int> &nums)
    {
        vector<int> prev(k + 1, 0), cur(k + 1);

        if (nums[0] <= k) // to check target value is less than value at index 0 then only we can have that subtraction as 0
            prev[nums[0]] = 1;

        for (int i = 1; i < m; i++)
        {
            for (int target = 1; target <= k; target++)
            {
                bool notTake = prev[target];

                bool take = false;

                if (nums[i] <= target)
                    take = prev[target - nums[i]];

                cur[target] = (notTake || take);
            }
            prev = cur;
        }

        return prev[k];
    }

    bool canPartition(vector<int> &nums)
    {

        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalSum += nums[i];
        }

        // return recursion(nums.size()-1,nums,totalSum,0);

        // vector<vector<int>> dp(nums.size(), vector<int> (totalSum+1,-1));
        // return memoization(nums.size()-1, nums, totalSum, 0, dp);

        if (totalSum % 2 == 1)
        {
            return false;
        }

        // vector<vector<int>> dp(nums.size(), vector<int> ((totalSum/2)+1,-1));

        // return memoization1(nums.size()-1, nums, totalSum/2, dp);

        //  return tabulation(nums.size(), totalSum/2 , nums);
        return spaceOptimization(nums.size(), totalSum / 2, nums);
    }
};