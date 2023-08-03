// 3 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void combination(int idx, vector<string>& ans,string s,map<int,vector<char>>& m,string digits)
    {

        if(idx == digits.size())
        {
            ans.push_back(s);
            return;
        }

        vector<char> ch = m[digits[idx]-'0'];
            
        for(int j = 0; j < ch.size() ; j++){
            
            combination(idx+1,ans,s+ch[j],m,digits);
            
        }
        
        return;
    }

    vector<string> letterCombinations(string digits) {
        
        map<int,vector<char>> m;

        char c = 'a';
        for(int i = 2; i <= 9; i++)
        {
            vector<char> cv;
            cv.push_back(c++);
            cv.push_back(c++);
            cv.push_back(c++);
            if(i == 9|| i == 7)
            cv.push_back(c++);
            
            m[i] = cv;
        }
        

    vector<string> ans;
    if(digits.size() == 0)
    {
        return ans;
    }
   
    combination(0,ans,"",m,digits);
    return ans;


    }
};