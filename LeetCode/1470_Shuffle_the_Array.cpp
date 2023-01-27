
// 27 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;

        for(int i = 0 ; i < n;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }

        return v;
    }
};