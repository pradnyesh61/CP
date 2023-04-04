// 4 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int partitionString(string s) {

    //     int count = 0;
    //     string s1 = "";

    //     for(int i = 0 ; i < s.length(); i++)
    //     {
    //         if(find(s1.begin(),s1.end(),s[i]) != s1.end())
    //         {
    //             s1 = "";
    //             count++;
    //             s1 += s[i];
    //         }
    //         else{
    //             s1 += s[i];

    //         }
    //     }

    //     if(!s1.empty())
    //     {
    //         count++;
    //     }

    //     return count;
    // }

    int partitionString(string s)
    {

        int count = 1;
        vector<int> v(26, -1);
        int subStringStart = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (v[s[i] - 'a'] >= subStringStart)
            {
                count++;
                subStringStart = i;
            }

            v[s[i] - 'a'] = i;
        }

        return count;
    }
};