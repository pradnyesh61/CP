// 25 Feb 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    vector<int> divisibilityArray(string word, int m) {
        
        vector<int> v;
        string s;

        long long q =0 ;
        for(int i = 0; i < word.size() ; i++)
        {
            s += word[i];
            q = (q * 10 + (word[i]-'0'))%m;
         
            if(q== 0)
            {
                v.push_back(1);
            }else{
                v.push_back(0);
            }
        }

        return v;
    }
};