// 26 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subset(int i, int last, vector<int> &temp, set<vector<int>> &ans, int sum, int k, int n)
    {
        if (i > last)
        {
            if (temp.size() == k && sum == n)
            {
                ans.insert(temp);
            }
            return;
        }

        temp.push_back(i);
        sum += i;
        subset(i + 1, last, temp, ans, sum, k, n);
        temp.pop_back();
        sum -= i;
        subset(i + 1, last, temp, ans, sum, k, n);
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {

        set<vector<int>> ans;
        vector<int> temp;

        subset(1, 9, temp, ans, 0, k, n);

        return vector(ans.begin(), ans.end());
    }
};