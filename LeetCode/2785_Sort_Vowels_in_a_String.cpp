// 18 October 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string sortVowels(string s) {
        
        vector<pair<char,int>> v;

        int i = 0;

        for(auto it : s)
        {
            if(it == 'a' || it == 'e' || it == 'i' ||it == 'o' ||it == 'u' ||
            it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U')
            {
                v.push_back({it,i});
            }

            i++;
        }

        sort(v.begin(),v.end());

        for(auto it : v)
        {
            s[it.second] = it.first;
        }

        return s;
    }
};