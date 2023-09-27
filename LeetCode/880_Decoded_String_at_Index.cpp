// 27 September 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeAtIndex1(string s, int k)
    {
        string ans = "";

        string a = "";

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] > '1' && s[i] < '9')
            {
                int n = s[i] - '0';

                ans += a;

                while (n--)
                {
                    a;
                }
                ans += a;
            }
            else
                a += s[i];
        }

        return ans;
    }

    string decodeAtIndex(string S, int K)
    {
        long N = 0, i;
        for (i = 0; N < K; ++i)
            N = isdigit(S[i]) ? N * (S[i] - '0') : N + 1;
        while (i--)
            if (isdigit(S[i]))
                N /= S[i] - '0', K %= N;
            else if (K % N-- == 0)
                return string(1, S[i]);
        return "lee215";
    }
};
