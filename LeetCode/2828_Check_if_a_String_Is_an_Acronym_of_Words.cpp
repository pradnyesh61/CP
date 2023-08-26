// 26 August 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        string ans = "";

        for(int i = 0 ; i < words.size() ;i++)
        {
            ans += words[i][0];
          
        }

          if(ans == s)
            {
                return true;
            }

        return false;
    }
};