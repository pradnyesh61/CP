// 22 Jan 2023
//Weekly Contest 329

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;

        string s = to_string(n);

        bool t = true;

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(t){
            sum += s[i]-'0';   
            t = false;
            }
            else
            {
            sum -= s[i]-'0';
            t = true;
            }
        }

        return sum;

    }
};