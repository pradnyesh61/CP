// 2 January 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>> ans;

        map<int,int> m;

        for(auto it : nums)
        {
            m[it]++;
        }

        int n = nums.size();

        while(n>0)
        {
            vector<int> temp;

            for(auto it = m.begin(); it != m.end(); it++)
            { 
                if(it->second>0)
                {
                    n--;
                    temp.push_back(it->first);
                }
                it->second = it->second - 1;
            }

          
            ans.push_back(temp);
        }

        return ans;

    }
};