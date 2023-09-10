// 10 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        set<int> v;

        for(auto it : nums)
        {
            for(int i = it[0] ; i <= it[1] ; i++)
            {
                v.insert(i);
            }
        }

        return v.size();
    }
};