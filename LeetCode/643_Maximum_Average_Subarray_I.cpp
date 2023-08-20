// 20 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {

        double sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum = sum + nums[i];
        }

        double maxi = sum;

        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];
            maxi = max(maxi, sum);
        }

        return maxi / k;
    }
};