// 4 March 2023

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        string a,b;
        for(int i = 0 ;i < s.length() ; i += 2)
        {
            a += s[i];
            b += s[i+1];
        }
        int aa = stoi(a);
        int bb = stoi(b);
        
        return aa+bb;
    }
};