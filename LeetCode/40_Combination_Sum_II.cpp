// 10 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void comb(int ind, int target, vector<int> candidates, vector<vector<int>> &ans, vector<int> v)
    {
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }

        for (int i = ind; i < candidates.size(); i++)
        {
            if (i > ind && candidates[i] == candidates[i - 1])
            {
                continue;
            }

            if (target < candidates[i])
            {
                break;
            }

            v.push_back(candidates[i]);
            comb(i + 1, target - candidates[i], candidates, ans, v);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        
        comb(0, target, candidates, ans, v);

        return ans;
    }
};