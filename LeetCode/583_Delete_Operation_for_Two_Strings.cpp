// 23 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(int i, int j, string s1, string s2, vector<vector<int>> &dp)
    {

        if (i < 0 || j < 0)
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (s1[i] == s2[j])
        {
            return dp[i][j] = 1 + lcs(i - 1, j - 1, s1, s2, dp);
        }

        return dp[i][j] = max(lcs(i - 1, j, s1, s2, dp), lcs(i, j - 1, s1, s2, dp));
    }

    int minDistance(string word1, string word2)
    {

        int m = word1.size();
        int n = word2.size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        int count = lcs(m - 1, n - 1, word1, word2, dp);

        return (m - count) + (n - count);
    }
};