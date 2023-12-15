// 15 December 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        set<string> city;

        map<string,int> m;

        for(int i =0 ; i < paths.size();i++)
        {
            city.insert(paths[i][0]);
            city.insert(paths[i][1]);
            m[paths[i][0]]++;  
        }

        for(auto it : city)
        {
            if(!m[it])
            {
                return it;
            }
        }

        return "";
    }
};