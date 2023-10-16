// 16 October 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    map<string,int> m;

    void words(string s)
    {
        string temp = "";
        s.push_back(' ');

        for(auto it : s)
        {
            if(it == ' ')
            {
                m[temp]++;
                temp = "";
            }
            else{
                temp += it;
            }
        }
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        words(s1);
        words(s2);

        vector<string> ans;

        for(auto it: m)
        {
            if(it.second == 1)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};