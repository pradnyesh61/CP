// 12 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> v;

        if (nums.size() == 0)
            return v;

        int a = nums[0];
        int j = a;
        int b = a;
        int start = a;
        nums.push_back(a);

        for (int i = 0; i < nums.size(); i++)
        {
            a = nums[i];

            if (a != j)
            {
                string s = "";
                if (start == b)
                {
                    s = to_string(start);
                }
                else
                {
                    s = to_string(start) + "->" + to_string(b);
                }

                v.push_back(s);
                start = nums[i];
                b = start;
                j = start;
                if (j < INT_MAX)
                    j++;
            }
            else
            {
                b = j;
                if (j < INT_MAX)
                    j++;
            }
        }

        return v;
    }
};