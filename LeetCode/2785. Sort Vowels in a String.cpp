// 13 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string sortVowels(string s) {
        
       

        vector<char> Cap;
        vector<char> small;

        for(auto it : s)
        {
            if(it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U')
            {
                Cap.push_back(it);
            }
            else if(it == 'a' || it == 'e' || it == 'i' ||it == 'o' ||it == 'u')
            {
                small.push_back(it);
            }
        }

        sort(Cap.begin(),Cap.end());
        sort(small.begin(),small.end());

        for(auto it : small)
        {
            Cap.push_back(it);
        }

        int j = 0;

        for(int i = 0; i < s.size(); i++)
        {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] ==  'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')
            {
                if(j < Cap.size())
                {
                    s[i] = Cap[j];
                    j++;
                }       
            }
        }



        return s;
    }
};