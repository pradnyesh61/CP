

// 14 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        string s = to_string(k);
        int j = s.length()-1;
        int i = num.size()-1;
        while(i >= 0 || j >= 0)
        {
            if(j >= 0)
            {
                carry += (s[j]-'0');
                j--;
            }
            if(i >= 0)
            {
                carry += num[i];
                num[i] = carry%10;
                i--;
            }
            else{
                 num.insert(num.begin(),carry%10);
            }  
            carry /= 10;
        }
        while(carry)
        {
            num.insert(num.begin(),carry%10);
            carry /= 10;
        }
        return num;
    }
};