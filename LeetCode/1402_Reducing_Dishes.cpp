// 29 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recursion(int i, int j, vector<int> &satisfaction)
    {
        if(i == satisfaction.size()-1)
        {
            int ans =  satisfaction[i]*j;
            if(ans < 0)
            {
                return 0;
            }
            return ans;
        }

       
        int take = satisfaction[i]*j + recursion(i+1, j+1, satisfaction);

        int notTake = recursion(i+1, j, satisfaction);

        return  max(take,notTake);
    }


     int memoization(int i, int j, vector<int> &satisfaction, vector<vector<int>> &dp)
    {
        if(i == satisfaction.size()-1)
        {
            int ans =  satisfaction[i]*j;
            if(ans < 0)
            {
                return 0;
            }
            return ans;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int take = satisfaction[i]*j + memoization(i+1, j+1, satisfaction, dp);

        int notTake = memoization(i+1, j, satisfaction, dp);

        return dp[i][j] =  max(take,notTake);
    }

    int tabulation(int m, int n, vector<int> &satisfaction)
    {
        vector<vector<int>> dp(m+1 ,vector<int> (n+2,0));
       
       for(int i = m-1 ; i >= 0 ; i--)
       {
           for(int j = 1 ; j <= n; j++)
           {     
                int take = satisfaction[i]*j + dp[i+1][j+1];

                int notTake = dp[i+1][j];

                dp[i][j] =  max(take,notTake);
           }
       }

       cout<<endl;

       for(auto it : dp)
        {
            for(auto i : it)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

       return dp[0][1];

    }

    int spaceOptimization(int m, int n, vector<int> &satisfaction)
    {
        vector<int> prev(n+2,0),cur(n+2);
       
       for(int i = m-1 ; i >= 0 ; i--)
       {
           for(int j = 1 ; j <= n; j++)
           {     
                int take = satisfaction[i]*j + prev[j+1];

                int notTake = prev[j];

                cur[j] =  max(take,notTake);
           }

           prev = cur;
           
            // for(auto i : prev)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl;

       }

       return prev[1];

    }

    int spaceOptimization1D(int m, int n, vector<int> &satisfaction)
    {
        vector<int> prev(n+2,0);
       
       for(int i = m-1 ; i >= 0 ; i--)
       {
           for(int j = 1 ; j <= n; j++)
           {     
                int take = satisfaction[i]*j + prev[j+1];

                int notTake = prev[j];

                prev[j] =  max(take,notTake);
           }

       }

       return prev[1];

    }

     
   

    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());

        //vector<vector<int>> dp(satisfaction.size(), vector<int> (satisfaction.size()+1,-1));
       // int ans = recursion(0, 1, satisfaction, dp);
       // int ans = memoization(0, 1, satisfaction, dp);

        //int ans = memoization(satisfaction.size()-1,satisfaction.size(),satisfaction,dp);

        // for(auto it : dp)
        // {
        //     for(auto i : it)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        //return ans;

        //return tabulation(satisfaction.size(),satisfaction.size(), satisfaction);
        //return spaceOptimization(satisfaction.size(),satisfaction.size(), satisfaction);
       return spaceOptimization1D(satisfaction.size(),satisfaction.size(), satisfaction);
     
    }
};