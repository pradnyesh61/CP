// 26 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(int i, int j, int m, vector<vector<int>> &triangle)
    {
        if (i >= m)
        {
            return 1e9;
        }

        if (i == m - 1)
        {
            return triangle[i][j];
        }

        int down = triangle[i][j] + recursion(i + 1, j, m, triangle);
        int diagonal = triangle[i][j] + recursion(i + 1, j + 1, m, triangle);

        return min(down, diagonal);
    }

    int memoization(int i, int j, vector<vector<int>> &triangle, vector<vector<int>> &dp)
    {
        if (i >= triangle.size())
        {
            return 1e9;
        }

        if (i == triangle.size() - 1)
        {
            return triangle[i][j];
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int down = triangle[i][j] + memoization(i + 1, j, triangle, dp);
        int diagonal = triangle[i][j] + memoization(i + 1, j + 1, triangle, dp);

        return dp[i][j] = min(down, diagonal);
    }

    int tabluation(int m, vector<vector<int>> &triangle)
    {
        vector<vector<int>> dp(m, vector<int>(m, 0));

        for (int j = 0; j < triangle[m - 1].size(); j++)
        {
            dp[m - 1][j] = triangle[m - 1][j];
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                int down = triangle[i][j] + dp[i + 1][j];
                int diagonal = triangle[i][j] + dp[i + 1][j + 1];

                dp[i][j] = min(down, diagonal);
            }
        }

        return dp[0][0];
    }

    int spaceOptimization(int m, vector<vector<int>> &triangle)
    {
        vector<int> prev(m), cur(m);

        for (int j = 0; j < triangle[m - 1].size(); j++)
        {
            prev[j] = triangle[m - 1][j];
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                int down = triangle[i][j] + prev[j];
                int diagonal = triangle[i][j] + prev[j + 1];

                cur[j] = min(down, diagonal);
            }
            prev = cur;
        }

        return prev[0];
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {

        int m = triangle.size();
        //   return recursion(0,0,m,triangle);

        // vector<vector<int>> dp(m,vector<int>(m,-1));
        // return memoization(0,0,triangle,dp);

        // return tabluation(m,triangle);

        return spaceOptimization(m, triangle);
    }
};