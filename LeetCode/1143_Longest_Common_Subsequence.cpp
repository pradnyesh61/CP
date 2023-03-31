// 31 March 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int recursion(int i, int j, string s1, string s2, vector<vector<int>>& dp)
    {
       
        if(i < 0 || j < 0)
        {
            return 0;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

       
        if(s1[i] == s2[j])
        {
            return  1 + recursion(i-1,j-1,s1,s2 ,dp);
        }
        
        return  max(recursion(i-1,j,s1,s2, dp) , recursion(i,j-1,s1,s2, dp));
       
    }

    int tabulation(int m,int n, string s1, string s2)
    {
        vector<vector<int>> dp(m+1, vector<int> (n+1,0));

        for(int i = 1 ; i <= m ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] =  1 + dp[i-1][j-1];
                }
                else
                dp[i][j] =  max( dp[i-1][j] ,  dp[i][j-1]);
            }
        }

        return dp[m][n];

    }

    int longestCommonSubsequence(string text1, string text2) {
        
        //vector<vector<int>> dp(text1.size(), vector<int> (text2.size(),-1));
       //return recursion(text1.size()-1,text2.size()-1,text1,text2, dp);
      
      return tabulation(text1.size(),text2.size(),text1,text2);
    }
};