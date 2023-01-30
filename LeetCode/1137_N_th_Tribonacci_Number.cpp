// 30 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {
        int t0 = 0;
        int t1 = 1;
        int t2 = 1;
        int sum = 0;

        if (n < 1)
        {
            return 0;
        }
        if (n < 3)
        {
            return 1;
        }

        for (int i = 3; i <= n; i++)
        {
            sum = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = sum;
        }

        return t2;
    }
};