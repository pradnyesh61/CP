// 25 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subsets(int i, int n, vector<int> &nums, vector<int> &temp, set<vector<int>> &ans)
    {
        if (i >= n)
        {
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[i]);
        subsets(i + 1, n, nums, temp, ans);
        temp.pop_back();
        subsets(i + 1, n, nums, temp, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> temp;

        subsets(0, nums.size(), nums, temp, ans);
        return vector(ans.begin(), ans.end());
    }
};