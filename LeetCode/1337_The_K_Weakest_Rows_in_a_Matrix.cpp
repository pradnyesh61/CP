// 18 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v(mat.size());

        for(int i = 0 ; i < mat.size();i++)
        {
            for(auto it : mat[i]){
                if(it)
                {
                    v[i]++;
                }
            }
        }

        set<pair<int,int>> pq;

        for(int i = 0; i < v.size(); i++)
        {
            pq.insert({v[i],i});
        }

        vector<int> ans;

       for(auto it : pq)
       {
           if(!k--)
               break;
           ans.push_back(it.second);

       }

        return ans;
    }
};