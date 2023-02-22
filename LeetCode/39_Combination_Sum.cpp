// 21 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void combsum(int i, int target, int n, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &v)
    {
        if (i == n)
        {
            if (target == 0)
            {
                ans.push_back(v);
            }
            return;
        }

        if (candidates[i] <= target)
        {
            v.push_back(candidates[i]);
            combsum(i, target - candidates[i], n, candidates, ans, v);
            v.pop_back();
        }
        combsum(i + 1, target, n, candidates, ans, v);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> v;

        combsum(0, target, candidates.size(), candidates, ans, v);

        return ans;
    }
};