// 11 April 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // string removeStars(string s) {
        
    //     stack<char> st;
      
    //     for(int i = 0 ; i < s.length() ; i++)
    //     {
    //         if(s[i] == '*')
    //         {
    //             st.pop();
    //         }
    //         else{
    //             st.push(s[i]);
    //         }
    //     }
        
    //     s ="";

    //     while(!st.empty())
    //     {
    //         s += st.top();
    //         st.pop();
    //     }

    //     reverse(s.begin(),s.end());
    //     return s;

    // }

    //  string removeStars(string s) {
        
    //     string temp = "";

    //     for(int i = 0 ; i < s.length() ; i++)
    //     {
    //         if(s[i] == '*')
    //         {
    //             temp.pop_back();
    //         }
    //         else{
    //             temp.push_back(s[i]);
    //         }
    //     }

    //     return temp;

    // }

     string removeStars(string s) {

         int j = 0;

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '*')
            {
               j--;
            }
            else{
                s[j] = s[i];
                j++;
            }
        }

        return s.substr(0,j);

    }
};