// 24 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int k, string s, string goal)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[k++])
            {
                return false;
            }

            if (k == goal.size())
            {
                k = 0;
            }
        }
        return true;
    }

    bool rotateString(string s, string goal)
    {

        if (s.size() != goal.size())
        {
            return false;
        }
        char c = s[0];

        for (int i = 0; i < goal.size(); i++)
        {
            if (goal[i] == c)
            {
                if (check(i, s, goal))
                {
                    return true;
                }
            }
        }

        return false;
    }
};