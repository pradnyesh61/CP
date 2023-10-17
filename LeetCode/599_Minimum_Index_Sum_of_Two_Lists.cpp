// 17 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {

        map<string, int> m;

        int mini = INT_MAX;

        for (int i = 0; i < list1.size(); i++)
        {
            for (int j = 0; j < list2.size(); j++)
            {
                if (list1[i] == list2[j])
                {
                    if (mini > i + j)
                    {
                        mini = i + j;
                    }

                    m[list1[i]] = i + j;
                }
            }
        }

        vector<string> v;

        for (auto it : m)
        {
            if (it.second == mini)
            {
                v.push_back(it.first);
            }
        }

        return v;
    }
};