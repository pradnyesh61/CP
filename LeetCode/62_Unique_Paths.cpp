// 22 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recursion(int i,int j)
    {

        if(i < 0 || j < 0)
        {
            return 0;
        }

        if(i == 0 && j == 0)
        {
            return 1;
        }

       int up =  recursion(i-1,j);
       int left =  recursion(i,j-1);

       return up+left;
    }

    int memoization(int i,int j,vector<vector<int>> &dp)
    {

        if(i < 0 || j < 0)
        {
            return 0;
        }

        if(i == 0 && j == 0)
        {
            return 1;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

       int up =  memoization(i-1,j,dp);
       int left =  memoization(i,j-1,dp);

       return dp[i][j] = up+left;
    }

    int tablulation(int m ,int n)
    {
        vector<vector<int>> dp(m, vector<int>(n,0));
       
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i ==0 && j ==0)
                {
                    dp[i][j] =1;
                }
                else{
                    int left = 0 , up = 0;
                    if(i-1 >= 0 )
                    {
                        left = dp[i-1][j];
                    }

                    if(j-1 >= 0)
                    {
                        up = dp[i][j-1];
                    }


                    dp[i][j] = left + up;       
                } 
            }
        }
        
        // for(auto it : dp)
        // {
        //     for(auto v : it)
        //     {
        //         cout<<v<<" ";
        //     }

        //     cout<<endl;
        // }

        return dp[m-1][n-1];

    }

    int spaceOptimization(int m,int n)
    {
        vector<int> prev(n,0);

        for(int i = 0 ; i < m ; i++)
        {
            vector<int> cur(n);
            for(int j = 0 ; j < n ; j++)
            {
                if(i ==0 && j ==0)
                {
                    cur[j] = 1;
                }
                else{
                    int left = 0;
                    if(i-1 >= 0)
                    {
                       left = prev[j];
                    }

                    int up = 0;
                    if(j-1 >= 0)
                    {
                        up = cur[j-1];
                    }

                    cur[j] = left+up;
                }
            }
            prev = cur;
            // for(auto it:prev)
            // {
            //     cout<<it<<" ";
            // }
            // cout<<endl;
        }

        return prev[n-1];
        
    }

    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
       // return recursion(m-1,n-1);
       // return memoization(m-1,n-1,dp);
       // return tablulation(m,n);
       return spaceOptimization(m,n);
    }
};