// 5 August 2023

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int start = -1;
        int end = -1;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                start = i;
                break;
            }
        }

        for (int j = n - 1; j >= 0; j--)
        {
            if (nums[j] == target)
            {
                end = j;
                break;
            }
        }

        return {start, end};
    }
};