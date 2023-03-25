// 25 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 || j < 0)
        {
            return 1e9;
        }

        if (i == 0 && j == 0)
        {
            return grid[i][j];
        }

        int up = grid[i][j] + recursion(i - 1, j, grid);
        int left = grid[i][j] + recursion(i, j - 1, grid);

        return min(up, left);
    }

    int memoization(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0)
        {
            return 1e9;
        }

        if (i == 0 && j == 0)
        {
            return grid[i][j];
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int up = grid[i][j] + memoization(i - 1, j, grid, dp);
        int left = grid[i][j] + memoization(i, j - 1, grid, dp);

        return dp[i][j] = min(up, left);
    }

    int tabulation(int m, int n, vector<vector<int>> &grid)
    {
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = grid[i][j];
                }
                else
                {
                    int up = grid[i][j];
                    if (i - 1 >= 0)
                    {
                        up += dp[i - 1][j];
                    }
                    else
                    {
                        up += 1e9;
                    }

                    int left = grid[i][j];
                    if (j - 1 >= 0)
                    {
                        left += dp[i][j - 1];
                    }
                    else
                    {
                        left += 1e9;
                    }

                    dp[i][j] = min(up, left);
                }
            }
        }

        // for(auto it : dp)
        // {
        //     for(auto i : it)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[m - 1][n - 1];
    }

    int spaceOptimization(int m, int n, vector<vector<int>> &grid)
    {
        vector<int> prev(n, 0), cur(n);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    cur[j] = grid[i][j];
                }
                else
                {
                    int up = grid[i][j];
                    if (i - 1 >= 0)
                    {
                        up += prev[j];
                    }
                    else
                    {
                        up += 1e9;
                    }

                    int left = grid[i][j];
                    if (j - 1 >= 0)
                    {
                        left += cur[j - 1];
                    }
                    else
                    {
                        left += 1e9;
                    }

                    cur[j] = min(up, left);
                }
            }

            prev = cur;
        }

        return prev[n - 1];
    }

    int minPathSum(vector<vector<int>> &grid)
    {

        int m = grid.size();
        int n = grid[0].size();

        if (m == 1 && n == 1)
        {
            return grid[0][0];
        }
        vector<vector<int>> dp(m, vector<int>(n, -1));

        // return  recursion(m-1,n-1,grid);
        return memoization(m - 1, n - 1, grid, dp);
        //   for(auto it : dp)
        //     {
        //         for(auto i : it)
        //         {
        //             cout<<i<<" ";
        //         }
        //         cout<<endl;
        //     }
        //     cout<<endl;
        //  return tabulation(m,n,grid);
        return spaceOptimization(m, n, grid);
    }
};