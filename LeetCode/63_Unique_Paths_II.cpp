// 24 March 2023
//12 August 2023
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(int i, int j, vector<vector<int>> &obstacleGrid)
    {
        if (i < 0 || j < 0 || obstacleGrid[i][j] == 1)
        {
            return 0;
        }

        if (i == 0 && j == 0)
        {
            return 1;
        }

        return recursion(i - 1, j, obstacleGrid) + recursion(i, j - 1, obstacleGrid);
    }

    int memoization(int i, int j, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0 || obstacleGrid[i][j] == 1)
        {
            return 0;
        }

        if (i == 0 && j == 0)
        {
            return 1;
        }

        if (dp[i][j] != -1)
            return dp[i][j];

        return dp[i][j] = memoization(i - 1, j, obstacleGrid, dp) +
                          memoization(i, j - 1, obstacleGrid, dp);
    }

    int tabulation(int m, int n, vector<vector<int>> &obstacleGrid)
    {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    dp[i][j] = 0;
                }
                else if (i == 0 && j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    int up = 0;
                    if (i - 1 >= 0)
                    {
                        up = dp[i - 1][j];
                    }

                    int left = 0;
                    if (j - 1 >= 0)
                    {
                        left = dp[i][j - 1];
                    }

                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m - 1][n - 1];
    }

    int spaceOptimization(int m, int n, vector<vector<int>> &obstacleGrid)
    {
        vector<int> prev(n, 0);
        for (int i = 0; i < m; i++)
        {
            vector<int> cur(n);
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    cur[j] = 0;
                }
                else if (i == 0 && j == 0)
                {
                    cur[j] = 1;
                }
                else
                {
                    int up = 0;
                    if (i - 1 >= 0)
                    {
                        up = prev[j];
                    }

                    int left = 0;
                    if (j - 1 >= 0)
                    {
                        left = cur[j - 1];
                    }

                    cur[j] = up + left;
                }
            }
            prev = cur;
            for (auto it : prev)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return prev[n - 1];
    }

    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        // return recursion(m-1,n-1,obstacleGrid,dp);
        // return memoization(m-1,n-1,obstacleGrid,dp);
        // return tabulation(m,n,obstacleGrid);
        return spaceOptimization(m, n, obstacleGrid);
    }
};