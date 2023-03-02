// 2 March 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        
        int count = 1;
       
        chars.push_back('0');
        int j = 0;

        for(int i = 0 ; i < chars.size()-1 ; i++)
        {
            if(chars[i] == chars[i+1])
            {
                count++;
            }
            else{
                 chars[j++] = chars[i];
                 if(count != 1){
                 string s = to_string(count);
                 for(int k = 0 ; k < s.length() ;k++)
                 {
                     chars[j++] = s[k];
                 }
                 }
                 count = 1;
            }
        }

        // map<char,int> m;

        // for(int i = 0;  i < chars.size() ; i++)
        // {
        //     m[chars[i]]++;
        // }
        
        // int i = 0;
        // for(auto it: m)
        // {
        //     chars[i++] = it.first;

        //     if(it.second != 1)
        //     {
        //         string s = to_string(it.second);
        //         cout<<s<<endl;
        //         for(int j = 0 ;j < s.length() ; j++)
        //         {
        //             chars[i++] = s[j];
        //         }
        //     }
        // }

    
        return j;
    }
};