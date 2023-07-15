// 15 July 2023

#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    string reverseVowels(string s) {
        
        int i = 0;
        int j = s.length()-1;
        
        vector<char> v ={'a','e','i','o','u','A','E','I','O','U'};
        
        while(i < j)
        {
        
            if(!(count(v.begin(), v.end(), s[i])))
            {
                i++;
            }
            
            if(!(count(v.begin(), v.end(), s[j])))
            {
                j--;
            }
            
            if(count(v.begin(), v.end(), s[i]) && count(v.begin(), v.end(), s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
                         
        return s;
    }
};