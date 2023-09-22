// 22 September 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isGood(vector<int>& nums) {

        map<int,int> m;
        int maxi = INT_MIN;

        for(auto it : nums)
        {
            if(it > maxi)
            {
                maxi = it;
            }
            m[it]++;
        }

        if(maxi+1 != nums.size())
        return false;

        if(m[maxi] == 2)
        {
            for(auto it : m)
            {
                if(it.second > 1 && it.first != maxi)
                {
                    return false;
                }
            }
            return true;
        }

        return false;
    }
};