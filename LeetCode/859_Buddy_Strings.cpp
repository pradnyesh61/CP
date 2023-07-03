// 3 July 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.length() != goal.length())
        {
            return false;
        }

        if(s == goal)
        {
            map<char,int> m;
            for(auto it : s)
            {
                m[it]++;
                if(m[it] >= 2)
                {
                    return true;
                }
            }

    
            return false;
        }

        int count =0;
        for(int i= 0 ; i< s.length() ;i++)
        {
            if(s[i] != goal[i])
            {
                count++;
            }
        }

        if(count > 2)
        {
            return false;
        }

        sort(s.begin(),s.end());
        sort(goal.begin(),goal.end());
          
        if(s != goal)
        {
            return false;
        }   
        
        return true;
        
    }
};