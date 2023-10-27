// 27 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> ch;

        for(auto it : s)
        {
            if(it >= 'A' && it <= 'Z' || it >= 'a' && it <= 'z')
            {
                ch.push(it);
            }
        }

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            {
                cout<<ch.top()<<" ";
                s[i] = ch.top();
                ch.pop();
            }
        }

        return s;
    }
};