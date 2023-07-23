// 23 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shortestToChar(string s, char c)
    {

        vector<int> ind;
        int n = s.length();

        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                ans[i] = 0;
                ind.push_back(i);
            }
        }

        int j = 0;
        int k = 0;

        if (ind.size() == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == -1)
                {
                    ans[i] = abs(i - ind[0]);
                }
            }
            return ans;
        }

        bool check = false;

        for (int i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {

                if (j + 1 < ind.size())
                {
                    j++;
                }
                if (check)
                {
                    k++;
                }
                check = true;
                continue;
            }

            if (i == 0)
            {
                ans[i] = ind[0];
            }

            if (i == n - 1)
            {
                ans[i] = ind[ind.size() - 1];
            }

            if (abs(i - ind[j]) > abs(i - ind[k]))
            {
                ans[i] = abs(i - ind[k]);
            }
            else
            {
                ans[i] = abs(i - ind[j]);
            }
        }

        return ans;
    }
};