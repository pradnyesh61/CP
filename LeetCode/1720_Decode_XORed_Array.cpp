// 18 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> v;
        v.push_back(first);
        for(int i = 0; i< encoded.size() ;i++)
        {

            int a = first^encoded[i];
            v.push_back(a);
            first = a;
        }

        return v;
    }
};