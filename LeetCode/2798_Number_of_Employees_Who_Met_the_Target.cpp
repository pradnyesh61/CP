// 30 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {

        int count = 0;

        int n = hours.size();

        for (int i = 0; i < n; i++)
        {
            if (hours[i] >= target)
            {
                count++;
            }
        }

        return count;
    }
};