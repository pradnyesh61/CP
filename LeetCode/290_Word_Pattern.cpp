// C++ Clear Explaination ,Please support if you find it usefull. Can give me feedback in comment for improvement.,will be very thankful.

// Intuition
// Need to map each word from string s with a char from pattern
// for last word need to check the operation again
// -rather add one space ' ' to string s , it will ease that point 2
// need to check for each word with pattern char = bijection
// if it matches return true else false

// Approach
// Add space to string s
// create new string to store the output / pattern
// create vector to store the char of pattern
// map the words with char
// if the word is present in map just add that value and continue
// if word does not present then check the char is present in vector if yes then we are having duplicate vaules
// so traverse till we the char is not present in vector
// now map that word with new char
// push that char to vector
// make word null
// add the pattern char to string
// Now check that pattern and our string matches or not
// if it matches return true
// else return false


// Code

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        s.push_back(' ');

        map<string,char> m;
        vector<char> v;
       

        string s1 = "";
        string temp = "";

        int j = 0;

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == ' ')
            {
                 if(m[temp])
                {
                    s1 += m[temp];
                    temp = "";
                    continue;
                }

                while(j < pattern.length() && find(v.begin(),v.end(),pattern[j]) != v.end() )
                {
                   j++;
                }

                if(j < pattern.length() && find(v.begin(),v.end(),pattern[j]) ==v.end())
                {
                    m[temp] = pattern[j];
                    v.push_back(pattern[j]);
                    temp = "";
                    s1 += pattern[j];
                    continue;
                }
            }

            temp += s[i];
        }

        if(s1 == pattern)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
   cout<< s.wordPattern("abba" , "dog cat cat dog");
}