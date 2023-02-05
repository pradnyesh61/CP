// 5 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {

        multiset<int, greater<int>> s(gifts.begin(), gifts.end());

        for (int i = 1; i <= k; i++)
        {
            int temp = *s.begin();
            s.erase(s.begin());

            s.insert(floor(sqrt(temp)));
        }

        long sum = 0;

        for (auto it : s)
        {
            sum += it;
        }

        return sum;
    }
};