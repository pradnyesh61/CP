// 2 December 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> frequencyOfChars;

        for(auto it : chars)
        {
            frequencyOfChars[it]++;
        }

        int count = 0;

        for(auto it : words)
        {
            map<char,int> frequencyOfWord;
            for(auto i : it)
            {
                frequencyOfWord[i]++;
            }

            bool flag = true;

            for(auto j : frequencyOfWord)
            {
                //cout<<j.first<<" = "<<frequencyOfChars[j.first]<<" != "<<j.second<<endl;
                if(frequencyOfChars[j.first] < j.second)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                count += it.size();
            }
        }

        return count;
    }
};