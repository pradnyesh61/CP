// 28 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {

        map<int, int> m;
        for (auto it : nums)
        {
            m[it]++;
        }

        int sum = 0;

        for (auto it : m)
        {
            if (it.second == 1)
            {
                sum += it.first;
            }
        }

        return sum;
    }
};