//A parentheses string is valid?

// 14 jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int n = s.length();

        stack<char> st;

        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if(s[i] == ')')
            {
                if(!st.empty())
                {
                    st.pop();
                }else{
                    count++;
                }
            }
        }

        while(!st.empty())
        {
            st.pop();
            count++;
        }

        return count;
    }
};