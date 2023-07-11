// 11 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> v(10, "");

        int j = 0;
        string ss = "";
        for (int i = 0; i < s.length(); i++)
        {
            int a = s[i] - '0';

            if (a >= 0 && a <= 9)
            {
                v[a] = ss;
                j = i + 2;
                cout << "ss = " << ss << endl;
                ss = "";
            }
            else if (s[i] == ' ')
            {
                continue;
            }
            else
            {
                ss += s[i];
            }
        }

        string ans;
        for (int i = 1; i < 10; i++)
        {
            if (v[i].length() > 0)
            {
                ans += v[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};