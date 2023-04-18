// 18 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // string mergeAlternately(string word1, string word2) {

    //     string s;

    //     int n = word1.size();
    //     int m = word2.size();

    //     int i = 0;
    //     int j = 0;

    //     while(i < n || j < m){
    //         if(i < n)
    //         {
    //             s += word1[i++];
    //         }
    //         if(j < m)
    //         {
    //             s += word2[j++];
    //         }
    //     }

    //     return s;

    // }

    string mergeAlternately(string word1, string word2)
    {

        string s;

        int n = word1.size();
        int m = word2.size();

        int i = 0;
        int j = 0;

        while (i < n && j < m)
        {
            s += word1[i++];
            s += word2[j++];
        }

        while (i < n)
        {
            s += word1[i++];
        }

        while (j < m)
        {
            s += word2[j++];
        }

        return s;
    }
};