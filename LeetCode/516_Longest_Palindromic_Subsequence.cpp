// 14 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(int i, int j, string s, string s2)
    {
        if (i < 0 || j < 0)
        {
            return 0;
        }

        if (s[i] == s2[j])
        {
            return 1 + lcs(i - 1, j - 1, s, s2);
        }
        else
        {
            return max(lcs(i - 1, j, s, s2), lcs(i, j - 1, s, s2));
        }
    }

    int Memoization_lcs(int i, int j, string s, string s2, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0)
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (s[i] == s2[j])
        {
            return dp[i][j] = 1 + Memoization_lcs(i - 1, j - 1, s, s2, dp);
        }
        else
        {
            return dp[i][j] = max(Memoization_lcs(i - 1, j, s, s2, dp), Memoization_lcs(i, j - 1, s, s2, dp));
        }
    }

    int tabulation_lcs(string s, string s2)
    {
        vector<vector<int>> dp(s.size() + 1, vector<int>(s2.size() + 1, 0));

        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 1; j <= s2.size(); j++)
            {
                if (s[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[s.size()][s.size()];
    }

    int spaceOptimization_lcs(string s, string s2)
    {
        vector<int> prev(s.size() + 1, 0);
        vector<int> cur(s.size() + 1, 0);

        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 1; j <= s.size(); j++)
            {
                if (s[i - 1] == s2[j - 1])
                {
                    cur[j] = 1 + prev[j - 1];
                }
                else
                {
                    cur[j] = max(prev[j], cur[j - 1]);
                }
            }

            prev = cur;
        }

        return prev[s.size()];
    }

    int longestPalindromeSubseq(string s)
    {

        string s2 = s;
        reverse(s.begin(), s.end());

        // vector<vector<int>> dp(s.size(), vector<int> (s.size(),-1));

        // return  lcs(s.size()-1, s2.size()-1, s, s2);

        // return  Memoization_lcs(s.size()-1, s2.size()-1, s, s2, dp);

        // return tabulation_lcs(s,s2);

        return spaceOptimization_lcs(s, s2);
    }
};