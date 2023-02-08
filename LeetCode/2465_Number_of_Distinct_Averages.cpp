// 8 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        set<float> s;

        int n = nums.size();

        for (int i = 0; i < n / 2; i++)
        {
            s.insert(float(nums[i] + nums[n - i - 1]) / 2);
        }

        return s.size();
    }
};