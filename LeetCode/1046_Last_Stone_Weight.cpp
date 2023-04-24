// 24 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {

        priority_queue<int> pq(stones.begin(), stones.end());

        while (!pq.empty())
        {
            int x = pq.top();
            pq.pop();

            if (pq.empty())
            {
                return x;
            }

            int y = pq.top();
            pq.pop();

            if (y <= x)
            {
                if (y != x)
                {
                    pq.push(x - y);
                }
            }
        }

        return 0;
    }
};