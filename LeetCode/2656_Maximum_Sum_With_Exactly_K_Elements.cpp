// 29 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int sum = 0;

        int m = *max_element(nums.begin(), nums.end());

        while (k--)
        {
            sum += m;
            m++;
        }

        return sum;
    }
};