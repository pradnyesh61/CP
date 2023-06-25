// 25 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countBeautifulPairs(vector<int> &nums)
    {

        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string s = to_string(nums[i]);
                if (gcd(s[0] - '0', nums[j] % 10) == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};