// 7 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs1(int i, vector<int> &vis, vector<int> adj[])
    {
        vis[i] = 1;

        for (auto it : adj[i])
        {
            if (vis[it] == 0)
                dfs1(it, vis, adj);
        }

        return;
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {

        int count = 0;
        int m = isConnected.size();

        vector<int> adj[m];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                }
            }
        }

        vector<int> vis(m, 0);

        for (int i = 0; i < m; i++)
        {
            if (vis[i] == 0)
            {
                count++;
                dfs1(i, vis, adj);
            }
        }

        return count;
    }
};