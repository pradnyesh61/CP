// 27 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int count = 0;
        int sum = 0;
        int ans = 0;

        nums.push_back(0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                cout << (i + 1) - count << " = " << ans << endl;
                ans = max((i + 1) - count, ans);
                count = i + 1;
            }
        }

        return ans - 1;
    }
};