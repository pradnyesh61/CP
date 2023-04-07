// 7 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool divisorGame(int n)
    {

        bool alice = true;

        while (1 < n)
        {
            n = n - 1;

            if (alice)
                alice = false;
            else
                alice = true;
        }

        if (alice)
        {
            return false;
        }

        return true;
    }
};