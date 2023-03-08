// 8 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void per(int ind, int n, vector<int> &nums, set<vector<int>> &ans)
    {
        if (ind == n)
        {
            ans.insert(nums);
            return;
        }

        for (int i = ind; i < n; i++)
        {
            if (i != ind && nums[i - 1] == nums[i])
            {
                continue;
            }

            swap(nums[ind], nums[i]);
            per(ind + 1, n, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {

        set<vector<int>> ans;
        per(0, nums.size(), nums, ans);

        return vector(ans.begin(), ans.end());
    }
};