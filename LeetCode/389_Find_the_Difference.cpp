// 25 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*
     char findTheDifference(string s, string t) {

           sort(t.begin(),t.end());
             sort(s.begin(),s.end());

             for(int i = 0 ; i < s.length() ; i++)
             {

                 if(s[i] != t[i])
                 {
                     return t[i];
                 }
             }


         return t[s.length()];


     }*/

    char findTheDifference(string s, string t)
    {

        for (int i = 0; i < s.length(); i++)
        {
            t[i + 1] += t[i] - s[i];
        }

        return t[t.length() - 1];
    }
};