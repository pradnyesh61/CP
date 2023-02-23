// 23 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int j = 0;
        int i = 0;
        while (i < s.length())
        {
            while (t[j] != s[i] && j < t.length())
            {
                j++;
            }

            if (j == t.length())
            {
                if (i < s.length())
                    return false;
            }

            if (t[j] == s[i])
            {
                i++;
                j++;
            }
        }

        if (i < s.length())
            return false;

        return true;
    }
};