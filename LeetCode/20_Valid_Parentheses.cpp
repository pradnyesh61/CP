// 10 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Below is the shorter version of below to this function 
    // difference is lines of code
    bool isValid(string s)
    {

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty() ||
                    (s[i] == ')' && st.top() != '(') ||
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '['))
                {
                    return false;
                }
                st.pop();
            }
        }

        if (st.empty())
        {
            return true;
        }

        return false;
    }
    // bool isValid(string s) {

    //     stack<char> st;

    //     for(int i = 0; i <s.length() ; i++)
    //     {
    //         if(s[i] == '(' || s[i] == '[' || s[i] == '{')
    //         {
    //             st.push(s[i]);
    //         }
    //         else if(s[i] == ')')
    //         {
    //             if(st.empty() || st.top() != '(')
    //             {
    //                 return false;
    //             }
    //             st.pop();
    //         }
    //         else if(s[i] == '}')
    //         {
    //             if(st.empty() || st.top() != '{')
    //             {
    //                 return false;
    //             }
    //             st.pop();
    //         }
    //         else if( s[i] == ']')
    //         {
    //             if(st.empty() || st.top() != '[')
    //             {
    //                 return false;
    //             }
    //             st.pop();
    //         }
    //     }

    //     if(st.empty())
    //     {
    //         return true;
    //     }

    //     return false;
    // }
};