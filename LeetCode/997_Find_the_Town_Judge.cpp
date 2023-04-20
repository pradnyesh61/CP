// 20 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> adj[n+2];

        for(int i = 0 ; i < trust.size() ; i++)
        {
            adj[trust[i][0]].push_back(trust[i][1]);
        }

        int judge = -1;

        for(int i = 1 ; i <= n ; i++)
        {
            if(adj[i].size() == 0)
            {
                judge = i;
                break;
            }
        }

        if(judge == -1)
        {
            return -1;
        }

        for(int i = 1 ; i <= n ; i++)
        {
            bool check = false;
            if(judge == i)
            {
                continue;
            }
            for(auto it : adj[i])
            {
                if(judge == it)
                {
                    check = true;
                }
            }

            if(!check)
            {
                return -1;
            }
        }

            return judge;
    }
};