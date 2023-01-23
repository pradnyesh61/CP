// 23 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void comb(int i, int n, vector<int> &temp, set<vector<int>> &ans, int &k)
    {
        if (i > n)
        {
            if (temp.size() == k)
            {
                ans.insert(temp);
            }

            return;
        }

        temp.push_back(i);
        comb(i + 1, n, temp, ans, k);
        temp.pop_back();
        comb(i + 1, n, temp, ans, k);
    }

    vector<vector<int>> combine(int n, int k)
    {
        set<vector<int>> ans;
        vector<int> temp;
        comb(1, n, temp, ans, k);
        return vector(ans.begin(), ans.end());
    }
};