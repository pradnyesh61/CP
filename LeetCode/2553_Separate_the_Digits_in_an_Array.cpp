// 4 Feb 2023
// Biweekly Contest 97

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {

        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            string temp = to_string(nums[i]);

            for (int j = 0; j < temp.length(); j++)
            {
                v.push_back(temp[j] - '0');
            }
        }

        return v;
    }
};