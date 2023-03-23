// 22 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MemoizationTopDown(int n, vector<int> &dp)
    {

        if (n <= 1)
        {
            return 1;
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }

        return dp[n] = MemoizationTopDown(n - 1, dp) + MemoizationTopDown(n - 2, dp);
    }

    int tabulationBottomUp(int n)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }

    int spaceOptimization(int n)
    {
        int prev = 1;
        int cur = 1;

        for (int i = 2; i <= n; i++)
        {
            int temp = prev + cur;
            prev = cur;
            cur = temp;
        }

        return cur;
    }

    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);

        cout << "MemoizationTopDown = " << MemoizationTopDown(n, dp) << endl;
        cout << "tabulationBottomUp = " << tabulationBottomUp(n) << endl;
        cout << "spaceOptimization = " << spaceOptimization(n) << endl;

        return spaceOptimization(n);
    }
};