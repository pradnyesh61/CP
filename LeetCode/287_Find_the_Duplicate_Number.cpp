// 19 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;

        for(auto it : nums)
        {
            if(m[it])
            {
                return it;
            }
            
            m[it]++;
        }

        return 0;
    }
};