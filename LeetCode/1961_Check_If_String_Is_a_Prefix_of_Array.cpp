// 22 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {

        int k = 0;

        int i = 0;

        while (i < s.length())
        {
            for (int j = 0; j < words[k].size(); j++)
            {
                cout << s[i] << " = " << words[k][j] << endl;
                if (i >= s.length())
                {
                    if (j < words[k].size())
                    {
                        return false;
                    }
                    return true;
                }

                if (s[i] != words[k][j])
                {
                    return false;
                }
                i++;
            }
            k++;
            if (k >= words.size())
            {
                break;
            }
        }

        if (i == s.length())
        {
            return true;
        }
        return false;
    }
};