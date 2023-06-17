// 17 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {

        unordered_map<char, int> m;

        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }

        int k = m[s[0]];

        for (auto it : m)
        {

            if (it.second != k)
            {
                return false;
            }
        }

        return true;
    }
};