// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".


// Weekly Contest 326 1st problem jan 1 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool detectCapitalUse(string word) {
        
        int count = 0 ; 
        bool small = false;

        for(int i = 0 ; i <word.length() ; i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                count++;
            }

            if(word[i] >= 'a' && word[i] <= 'z')
            {
                small = true;
            }

            if(small && count >= 2)
            {
                return false;
            }

        }

        if(count == 1)
        {
           if(word[0] >= 'a' && word[0] <= 'z')
           {
               return false;
           }
        }

        return true;
    }

};

int main()
{
    Solution s;
    cout<<s.detectCapitalUse("USA");
}