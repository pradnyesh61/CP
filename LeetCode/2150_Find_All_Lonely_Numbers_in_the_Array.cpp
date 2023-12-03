// 3 December 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {


public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int,int> numbers;

        for(auto it : nums)
        {
            numbers[it]++;
        }

        vector<int> ans;

        for(auto it : nums)
        {
            if( !numbers[it-1] && !numbers[it+1] && numbers[it] == 1)
            {
                ans.push_back(it);
            }
        }

        return ans;
    }
};