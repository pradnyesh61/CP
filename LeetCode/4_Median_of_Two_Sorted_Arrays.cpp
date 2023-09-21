// 21 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& v, vector<int>& v1) {
        

        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back(v1[i]);
        }

        sort(v.begin(), v.end());

        int x = (v.size() / 2)-1;


        if ((v.size()) % 2 == 0)
        {
             return float(v[x] + v[x + 1]) / 2;
        }
        else
        {
            return  float(v[x + 1]);
        }
        
    }
};