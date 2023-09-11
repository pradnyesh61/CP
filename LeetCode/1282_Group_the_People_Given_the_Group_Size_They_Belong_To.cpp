// 11 September 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int,vector<int>> m;

        for(int i = 0; i < groupSizes.size() ; i++)
        {
            m[groupSizes[i]].push_back(i);
        }

        for(auto it : m)
        {
            int k = it.second.size();
            int j = 0;

            while(j < k)
            {
                int t = it.first;
                vector<int> v;
               
                while(t--)
                {
                    v.push_back(it.second[j]);
                    j++;
                }
                
                ans.push_back(v);
            }
           
        }

        return ans;
    }
};