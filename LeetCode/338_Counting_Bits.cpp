// 5 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bit_count(int n)
    {
        int count = 0;

        while (n)
        {
            int ans = n % 2;
            if (ans == 1)
            {
                count++;
            }
            n = n / 2;
        }
        return count;
    }
    vector<int> countBits(int n)
    {

        vector<int> v;

        for (int i = 0; i <= n; i++)
        {
            v.push_back(bit_count(i));
        }

        return v;
    }
};