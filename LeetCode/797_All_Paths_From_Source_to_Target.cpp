// 29 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int i, vector<vector<int>> &adj,vector<vector<int>> &ans,
                vector<int> &temp, int end)
    {
        if(i == end)
        {
            ans.push_back(temp);
            return ;
        }

        for(int j = 0 ; j < adj[i].size();j++)
        {
            temp.push_back(adj[i][j]);
            dfs(adj[i][j],adj,ans,temp,end);
            temp.pop_back();
        }
    }

    // vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adj) {

    //     int end = adj.size()-1;

    //     vector<vector<int>> ans;
    //     vector<int> temp;

    //     temp.push_back(0);

    //     dfs(0,adj,ans,temp,end);

    //     return ans;

    // }
    //  vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adj) {

    //     int end = adj.size()-1;

    //     vector<vector<int>> ans;
    //     vector<int> path;
    //     path.push_back(0);

    //     queue<pair<int,vector<int>>> q;
        
    //     q.push({0,path});

    //     while(!q.empty())
    //     {
    //         int node = q.front().first;
    //         vector<int> pa = q.front().second;

    //         if(node == end)
    //         {
    //             ans.push_back(pa);
    //         }

    //         q.pop();

    //         for(int  i= 0 ;i < adj[node].size() ; i++)
    //         {
    //             pa.push_back(adj[node][i]);
    //             q.push({adj[node][i],pa});
    //             pa.pop_back();
    //         }
    //     }

    //     return ans;

    // }

     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adj) {

        int end = adj.size()-1;

        vector<vector<int>> ans;
        vector<int> path;
        path.push_back(0);

        queue<vector<int>> q;
        q.push(path);

        while(!q.empty())
        {
            path = q.front();
            q.pop();

            int node = path.back();

            if(node == end)
            {
                ans.push_back(path);
            }


            // for(int j = 0 ;j < adj[node].size() ; j++)
            // {
            //     path.push_back(adj[node][j]);
            //     q.push(path);
            //     path.pop_back();
            // }

            for(auto it : adj[node])
            {
                // rather poping node back we are using new vector each time
                vector<int> v(path);
                v.push_back(it);
                q.push(v);
            }


        }

        return ans;

    }
};