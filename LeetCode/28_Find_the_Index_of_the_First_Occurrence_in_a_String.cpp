// 3 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        if (haystack.length() < needle.length())
        {
            return -1;
        }

        char s = needle[0];

        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack[i] == s)
            {
                int k = i;
                int j;
                for (j = 0; j < needle.length() && k < haystack.length(); j++)
                {
                    if (needle[j] != haystack[k])
                    {
                        break;
                    }
                    k++;
                }

                if (j == needle.length())
                {
                    return i;
                }
            }
        }

        return -1;
    }
};