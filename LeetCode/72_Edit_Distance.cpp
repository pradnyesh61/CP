
// 1 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(int i, int j, string s1, string s2)
    {

        if (i < 0)
            return j + 1;

        if (j < 0)
            return i + 1;

        if (s1[i] == s2[j])
        {
            return lcs(i - 1, j - 1, s1, s2);
        }
        else
            return 1 + min(lcs(i - 1, j, s1, s2), min(lcs(i, j - 1, s1, s2), lcs(i - 1, j - 1, s1, s2)));
    }

    int min1Distance(string s1, string s2)
    {

        int n = s1.size();
        int m = s2.size();

        int k = lcs(n - 1, m - 1, s1, s2);
        cout << n << " = " << m << " = " << k << endl;

        return k;
    }

    vector<vector<int>> dp;

    int fun(string a, string b, int i, int j)
    {
        if (i < 0)
            return j + 1;

        if (j < 0)
            return i + 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (a[i] == b[j])
            return dp[i][j] = fun(a, b, i - 1, j - 1);

        else
            return dp[i][j] = 1 + min(fun(a, b, i - 1, j), min(fun(a, b, i, j - 1), fun(a, b, i - 1, j - 1)));
    }

    int minDistance(string a, string b)
    {
        int n = a.size();
        int m = b.size();

        dp.clear();
        dp.resize(n + 1, vector<int>(m + 1, -1));
        return fun(a, b, n - 1, m - 1);
    }
};