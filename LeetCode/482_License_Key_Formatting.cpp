// 10 October 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char> st;

        for(auto it:s)
        {
            if(it != '-')
            {
                st.push(toupper(it));
            }
        }

        string ans ="";

        while(!st.empty())
        {
            for(int i = 0; i < k;i++)
            {
                if(st.empty())
                    break;

                ans += st.top();
                st.pop();   
            }

            if(!st.empty())
            ans += '-';
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};