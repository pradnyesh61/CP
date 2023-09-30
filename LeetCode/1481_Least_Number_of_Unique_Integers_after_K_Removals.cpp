// 30 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {

        map<int, int> m;

        for (auto it : arr)
        {
            m[it]++;
        }

        vector<int> v;

        for (auto it : m)
        {
            v.push_back(it.second);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            while (v[i] > 0 && k > 0)
            {
                v[i]--;
                k--;
            }
        }

        int count = 0;

        for (auto it : v)
        {
            if (it != 0)
            {
                count++;
            }
        }

        return count;
    }
};