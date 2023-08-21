// 21 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {

        string t = s + s;
        if (t.substr(1, t.size() - 2).find(s) != -1)
            return true;
        return false;

        /*
            char c = s[0];

            string s1 ="";
            s1 += c;

            int i = 0;
            for( i = 1; i< s.size() ;i++)
            {

                if(i+1 < s.size() && s[i] == c && s[i+1] != c)
                {
                    break;
                }

                s1 += s[i];
            }

            int j = 0;

            bool check = true;
            cout<<s1<<endl;


            for(; i< s.size();i++)
            {
                check = false;
                if(s[i] != s1[j])
                {
                    return false;
                }
                j++;
                if(i+1 == s.size())
                {
                    break;
                }
                if(j == s1.size())
                {
                    j = 0;
                }
            }

            if(check)
            {
                return true;
            }

            if(j != s1.size())
            {
                return false;
            }

            return true;

            /8*/
    }
};