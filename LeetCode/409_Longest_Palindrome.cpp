// 24 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {

        map<char, int> m;

        for (auto it : s)
        {
            m[it]++;
        }

        int count = 0;
        int evencount = 0;

        for (auto it : m)
        {
            count += (it.second / 2) * 2;

            if (count % 2 == 0 && it.second % 2 == 1)
            {
                count++;
            }
        }
        return count;
    }
};