// 24 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subset(int i, int n, vector<int> &nums, set<vector<int>> &ans, vector<int> temp)
    {
        if (i >= n)
        {
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[i]);
        subset(i + 1, n, nums, ans, temp);
        temp.pop_back();
        subset(i + 1, n, nums, ans, temp);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> temp;
        set<vector<int>> ans;

        subset(0, nums.size(), nums, ans, temp);

        return vector(ans.begin(), ans.end());
    }
};