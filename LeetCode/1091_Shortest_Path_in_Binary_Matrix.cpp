// 1 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(int i, int j, vector<vector<int>> &grid, int count)
    {
        int n = grid.size();

        if (i == 0 && j == 0)
        {
            return count + 1;
        }

        int row[] = {-1, -1, 0, +1, +1, +1, 0, -1};
        int col[] = {0, +1, +1, +1, 0, -1, -1, -1};

        int mini = INT_MAX;
        for (int k = 0; k < 8; k++)
        {
            int ans = INT_MAX;

            int nrow = i + row[k];
            int ncol = j + col[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0)
            {
                grid[i][j] = -1;
                ans = recursion(nrow, ncol, grid, count + 1);
                grid[i][j] = 0;
            }

            mini = min(mini, ans);
        }

        return mini;
    }

    int memoization(int i, int j, vector<vector<int>> &grid, int count, vector<vector<int>> &dp)
    {
        int n = grid.size();

        if (i == 0 && j == 0)
        {
            return 1;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int row[] = {-1, -1, 0, +1, +1, +1, 0, -1};
        int col[] = {0, +1, +1, +1, 0, -1, -1, -1};

        int mini = INT_MAX;
        for (int k = 0; k < 8; k++)
        {
            int ans = INT_MAX;

            int nrow = i + row[k];
            int ncol = j + col[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0)
            {
                grid[i][j] = -1;
                ans = 1 + memoization(nrow, ncol, grid, count, dp);
                grid[i][j] = 0;
            }

            mini = min(mini, ans);
        }

        return dp[i][j] = mini;
    }

    int recursion2(int i, int j, vector<vector<int>> &grid)
    {
        int n = grid.size();

        int row[] = {-1, -1, 0, +1, +1, +1, 0, -1};
        int col[] = {0, +1, +1, +1, 0, -1, -1, -1};

        queue<pair<int, int>> q;
        q.push({i, j});

        int mini = INT_MAX;
        int count = 1;

        while (!q.empty())
        {
            int sz = q.size();

            while (sz--)
            {
                int ii = q.front().first;
                int jj = q.front().second;
                q.pop();

                if (ii == 0 && jj == 0)
                {
                    return count;
                }

                for (int k = 0; k < 8; k++)
                {
                    int ans = INT_MAX;

                    int nrow = ii + row[k];
                    int ncol = jj + col[k];

                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0)
                    {
                        grid[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
            count++;
        }

        return -1;
    }

    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {

        int n = grid.size();
        if (grid[n - 1][n - 1] != 0)
            return -1;
        // int ans = recursion(n-1,n-1,grid,0);
        // // vector<vector<int>> dp(n,vector<int> (n,-1));
        // // int ans = memoization(n-1,n-1,grid,0,dp);

        // // for(auto it : dp)
        // // {
        // //     for(auto i : it)
        // //     {
        // //         cout<<i<<" ";
        // //     }
        // //     cout<<endl;
        // // }

        // if(ans == INT_MAX)
        // {
        //     return -1;
        // }

        // return ans;

        return recursion2(n - 1, n - 1, grid);
    }
};
