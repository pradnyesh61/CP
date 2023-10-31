// 31 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {

        vector<int> ans;

        int x = pref[0];
        ans.push_back(x);

        for (int i = 1; i < pref.size(); i++)
        {
            ans.push_back(pref[i - 1] ^ pref[i]);
        }

        return ans;
    }
};