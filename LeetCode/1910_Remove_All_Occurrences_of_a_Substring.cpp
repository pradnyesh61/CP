
// 28 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        for (int i = 0; i < s.length(); i++)
        {

            int j = 0;
            if (s[i] == part[j])
            {
                int k = i;
                while (j < part.length())
                {

                    if (s[k] == part[j])
                    {
                        k++;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (j == part.length())
                {
                    s.erase(i, j);
                    i = -1;
                }
            }
        }
        return s;
    }
};