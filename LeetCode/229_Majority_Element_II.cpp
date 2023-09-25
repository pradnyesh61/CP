// 26 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {

        map<int, int> m;

        for (auto it : nums)
        {
            m[it]++;
        }

        vector<int> ans;

        int n = (nums.size() / 3);

        for (auto it : m)
        {
            if (it.second > n)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};