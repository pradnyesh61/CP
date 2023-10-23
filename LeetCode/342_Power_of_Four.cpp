// 23 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {

        if (n > 0)
        {
            int k = log2(n) / 2;

            if (k * 2 == log2(n))
            {
                return true;
            }
        }

        return false;
    }
};