// 20 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {

        int i = 0;
        if (k == 0)
        {
            return nums;
        }
        vector<int> v(nums.size(), -1);

        if (k > nums.size() || k + k + 1 > nums.size())
        {
            return v;
        }

        long long int presum = 0;
        long long int postsum = 0;

        for (i = 0; i <= k; i++)
        {
            presum += nums[i];
        }

        if (k + k <= nums.size())
        {
            for (; i <= k + k; i++)
            {
                postsum += nums[i];
            }
        }

        long long int sum = presum + postsum;
        int div = k + k + 1;
        int m = 0;
        int n = k + k + 1;

        for (i = k; i < nums.size() - k; i++)
        {
            v[i] = sum / div;
            if (k > 0)
            {
                sum -= nums[m];
                m++;
            }
            if (n < nums.size())
            {
                sum += nums[n];
                n++;
            }
        }

        return v;
    }
};