// 29 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {

        int count = 0;

        while (n)
        {
            if (n % 2)
            {
                count++;
            }

            n /= 2;
        }

        return count;
    }
};
