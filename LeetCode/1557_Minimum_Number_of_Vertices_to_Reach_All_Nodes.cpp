// 6 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int i, vector<int> adj[],int n,vector<int> &vis)
    {
        vis[i] = 1;

        for(auto it : adj[i])
        {
            if(vis[it] == 0)
            {
                dfs(it,adj,n,vis);
            }
        }

        return;
    }

    // vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

    //     vector<int> adj[n];

    //     for(int i = 0; i< edges.size(); i++)
    //     {
    //         adj[edges[i][0]].push_back(edges[i][1]);
    //     }

      

    //     vector<int> temp;

    //     for(int j = 0 ; j < n ; j++)
    //     {
    //         vector<int> vis(n,0);
    //         vector<int> ans;

    //         ans.push_back(j);
    //         dfs(j,adj,n,vis);

    //         for(int i = 0; i < n ;i++)
    //         {
    //             if(vis[i] == 0)
    //             {
    //                 ans.push_back(i);
    //                 dfs(i,adj,n,vis);
    //             }
    //         }

    //         for(auto it:ans)
    //         {
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;

    //         if(j == 0)
    //         {
    //             temp = ans;
    //         }

    //         if(ans.size() < temp.size())
    //         {
    //             temp = ans;
    //         }
    //     }

    //     return temp;
    // }

     vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        vector<int> adj[n];

        for(int i = 0; i< edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }

        vector<int> inbound(n,0);

        for(int i = 0; i < n; i++)
        {
            for(auto it : adj[i])
            {
                inbound[it]++;
            }
        }

        vector<int> ans;

        for(int i = 0; i<n ;i++)
        {
            if(inbound[i] == 0)
            ans.push_back(i);
            cout<<inbound[i]<<" ";
        }

        return ans;

     }
};