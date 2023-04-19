// 19 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void bfs(int i, int j, vector<vector<int>> &grid, int n, int m)
    {

        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = 1;

        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++)
            {
                int nrow = row + delRow[k];
                int ncol = col + delCol[k];

                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == 0)
                {
                    q.push({nrow, ncol});
                    grid[nrow][ncol] = 1;
                }
            }
        }
    }

    int closedIsland(vector<vector<int>> &grid)
    {

        vector<vector<int>> vis;

        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    if (grid[i][j] == 0)
                    {
                        bfs(i, j, grid, n, m);
                    }
                }
            }
        }

        int count = 0;

        // for(auto it : grid)
        // {
        //     for(auto i : it)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }

        // cout<<endl<<endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                {
                    count++;
                    bfs(i, j, grid, n, m);
                }
                //  cout<<grid[i][j]<<" ";
            }
            // cout<<endl;
        }

        return count;
    }
};