// 22 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool static sort_pair(pair<int, int> p, pair<int, int> p2)
    {
        return p.second > p2.second;
    }

    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> vv;

        map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        vector<pair<int, int>> vp(m.begin(), m.end());
        sort(vp.begin(), vp.end(), sort_pair);

        for (auto it : vp)
        {
            if (k)
            {
                vv.push_back(it.first);
                k--;
            }
            //  cout<<it.first<< " = "<<it.second<<endl;
        }
        return vv;
    }
};