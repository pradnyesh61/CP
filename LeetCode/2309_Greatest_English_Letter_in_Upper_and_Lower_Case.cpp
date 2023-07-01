// 1 July 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        

        unordered_map<char,int> small;
        unordered_map<char,int> great;

        sort(s.begin(),s.end(),greater<char>());

        for(int i = 0; i < s.length();i++)
        {
            char c = s[i];
            string t = "";
          
            if(c >= 'A' && c <= 'Z')
            {
                if(small[tolower(c)] == 1)
                {
                    return t=toupper(c);
                }
               great[c] = 1; 
            }
            else 
            if(c >= 'a' && c <= 'z')
            {
                if(great[toupper(c)] == 1)
                {
                    return t =toupper(c);
                }
               small[c] = 1; 
            }
            
           
        }



        return "";
    }
};