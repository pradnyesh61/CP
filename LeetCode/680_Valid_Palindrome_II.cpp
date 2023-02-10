// 10 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int low = 0, high = s.size() - 1;
        return validPalindrome(s, low, high, 0);
    }

    bool validPalindrome(string &s, int lo, int hi, int count)
    {
        if (count > 1)
            return false;

        while (lo < hi)
        {
            if (s[lo] == s[hi])
            {
                lo++;
                hi--;
            }
            else
            {
                return validPalindrome(s, lo + 1, hi, count + 1) ||
                       validPalindrome(s, lo, hi - 1, count + 1);
            }
        }
        return true;
    }
};