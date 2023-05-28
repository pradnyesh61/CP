// 28 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeTrailingZeros(string num)
    {

        for (int i = num.size() - 1; i >= 0; i--)
        {
            if (num[i] != '0')
            {
                break;
            }

            num.pop_back();
        }

        return num;
    }
};