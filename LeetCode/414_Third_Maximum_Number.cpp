// 30 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {

        set<int> s(nums.begin(), nums.end());

        priority_queue<int> pq(s.begin(), s.end());

        int ans = 0;

        int max = pq.top();
        int a = 0;

        while (!pq.empty())
        {
            ans = pq.top();
            a++;
            if (a == 3)
            {
                return ans;
            }
            pq.pop();
        }

        return max;
    }
};