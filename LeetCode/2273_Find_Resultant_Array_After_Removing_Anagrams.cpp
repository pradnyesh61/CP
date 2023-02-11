// 11 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> v;
        int n = words.size();

        for (int i = 0; i < n; i++)
        {
            string s = words[i];
            sort(s.begin(), s.end());
            v.push_back(s);
        }

        vector<string> q;
        q.push_back(words[0]);

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                q.push_back(words[i + 1]);
            }
        }

        return q;
    }
};