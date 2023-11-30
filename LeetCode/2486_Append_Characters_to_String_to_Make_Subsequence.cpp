// 30 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int j = 0;
        int i = 0;

        while(i < s.size())
        {
            if(s[i] == t[j])
            {
                j++;
            }

            i++;
        }

        return t.size()-j;
    }
};