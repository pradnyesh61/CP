// 21 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
       if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
       {
           return edges[0][0];
       }

       return edges[0][1];
    }

    //  int findCenter(vector<vector<int>>& edges) {
        
    //     map<int,int> m;

    //     for(int i = 0 ; i < edges.size() ; i++)
    //     {
    //         m[edges[i][0]]++;
    //         m[edges[i][1]]++;
    //     }

    //     int l = m.size();
        
    //     for(auto it : m)
    //     {
    //         if(it.second == l-1)
    //         {
    //             return it.first;
    //         }
    //     }

    //     return -1;
    // }
};