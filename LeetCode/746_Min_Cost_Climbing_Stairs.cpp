// 6 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Memoization(int i, vector<int> &cost, vector<int> &dp)
    {

        if (i == 0)
        {
            return cost[0];
        }

        if (i < 0)
        {
            return 0;
        }

        if (dp[i] != -1)
            return dp[i];

        int singleStep = cost[i] + Memoization(i - 1, cost, dp);

        int twoStep = cost[i] + Memoization(i - 2, cost, dp);

        return dp[i] = min(singleStep, twoStep);
    }

    int tabulation(vector<int> &cost)
    {
        int n = cost.size();

        vector<int> dp(n + 1, 0);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            int singleStep = cost[i - 1] + dp[i - 1];
            int twoStep = cost[i - 1];
            if (i - 2 >= 0)
                twoStep += dp[i - 2];

            dp[i] = min(singleStep, twoStep);
        }

        return min(dp[n - 1], dp[n]);
    }

    int spaceOptimization(vector<int> &cost)
    {
        int n = cost.size();

        int prev = 0;
        int secondPrev = 0;

        for (int i = 1; i <= n; i++)
        {
            int singleStep = cost[i - 1] + prev;
            int twoStep = cost[i - 1] + secondPrev;

            int ans = min(singleStep, twoStep);

            secondPrev = prev;
            prev = ans;
        }

        return min(prev, secondPrev);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        
        // cost.push_back(0);
        // vector<int> dp(cost.size(),-1);
        // return Memoization(cost.size()-1, cost, dp);

        // return tabulation(cost);
        return spaceOptimization(cost);
    }
};