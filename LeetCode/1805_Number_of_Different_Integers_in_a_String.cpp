// 21 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        
        set<string> s;

        string t = "";

        word.push_back('a');

       for(int i = 0; i < word.size() ;i++)
        {
            if(word[i] >= '0' && word[i] <= '9')
            {
                t += word[i];
            }
            else{
                if(t != ""){
                
                const regex pattern("^0+(?!$)");
                string str = regex_replace(t, pattern, "");

                s.insert(str);
                t = "";
                }
            }
        }

        return s.size();
    }
};