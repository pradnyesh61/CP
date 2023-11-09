// 11 November 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        int id =0;
        int ct = 0;

        for(int i = 0; i < grid.size();i++)
        {
            int count = 0;
            for(int j = 0 ; j < grid[i].size(); j++)
            {
                if(i != j && grid[i][j] ==1)
                {
                    count++;
                }
            }

            if(count > ct)
            {
                ct = count;
                id = i;
            }
        }

        return id;
    }
};