// 7 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void per(int idx, int n, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (idx == n)
        {
            ans.push_back(nums);
            return;
        }

        for (int i = idx; i < n; i++)
        {
            swap(nums[idx], nums[i]);
            per(idx + 1, n, nums, ans);
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> ans;
        per(0, nums.size(), nums, ans);

        return ans;
    }
};