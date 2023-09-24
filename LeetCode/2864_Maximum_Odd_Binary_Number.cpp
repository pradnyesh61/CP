// 24 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {

        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }

            s[i] = '0';
        }

        s[s.size() - 1] = '1';

        if (count == 1)
        {
            return s;
        }

        count--;

        for (int i = 0; i < count; i++)
        {
            s[i] = '1';
        }

        return s;
    }
};