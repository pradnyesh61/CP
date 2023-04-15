// 15 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
        vector<int> v;

        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0 ; i < n ; i++)
        {
            int maxlen = 0;
            for(int j = 0 ; j < m ; j++)
            {
                string s = to_string(grid[j][i]);
                if(maxlen < s.size())
                {
                    maxlen = s.size();
                }
            }
            v.push_back(maxlen);
        }

        return v;
    }
};