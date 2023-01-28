/*
Remove the string part from string s

so first of need to check whether the first character of part string is equal to string s
if yes then only I will check the further for remaining characters of part string
    because if first character does not match then we dont need to go through whole string 
Now when the first letter matches the we need to assign the index value to new variable of string s ie. -> i
why ?
because we need to check the next characters are matching/equal to part string's characters
if dont use the same variable i will be incremented and we want to remove / erase the substring from s
so we wont be having the starting index ie. why i will be our starting index if the substring finds in s equal to part string
now increment k and j as the characters match
if it does not match then simply break from the loop because we wont be getting the substring s as part
now check if the j is having the same value as part length
if it does , then I can say that we have traversed through the part string up till end
and if we have pass through the end then it means we have a substring in s matching part string
so I will just erase that substring 
here when we use erase function for string
we will have to give 2 parameters 
first parameter  - starting index
second parameter - how many character's 

put this in mind that the second parameter in string regarding erase function its count of character not
the ending index -1  position

and I will check from the starting index again because there is possibility the charaters before string index 
we will get new substring matching / equals to part string 


*/


// 28 Jan 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        for (int i = 0; i < s.length(); i++)
        {

            int j = 0;
            if (s[i] == part[j])
            {
                int k = i;
                while (j < part.length())
                {

                    if (s[k] == part[j])
                    {
                        k++;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (j == part.length())
                {
                    s.erase(i, j);
                    i = -1;
                }
            }
        }
        return s;
    }
};